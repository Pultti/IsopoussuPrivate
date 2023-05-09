void alustaTimer(void);
void kellonAika(void);

#define TUNNIT_PITUUS 24
#define MINUUTIT_PITUUS 60
#define SEKUNNIT_PITUUS 60
volatile int sekunnit_Taulu[SEKUNNIT_PITUUS] = {0};
volatile int sekunnit = 0;
volatile int minuutit = 0;
volatile int tunnit = 0;
volatile int myTime = millis();

boolean naytteetOtettu = false;


void setup() {

   Serial.begin(2400); //baudinopeus 2400, jotta ehditään ottamaan riittavasti
                       //naytteita signaalista, kun naytetaajuus = 10 000 Hz
   alustaTimer();
}

ISR(TIMER1_COMPA_vect)
{
    

     
      //Serial.print(indeksi);
    
      
    
    
    
    /* Tähän väliin pitää toteuttaa seuraava toiminnallisuus:
       - otetaan yksi analoginen näyte/keskeytys A0 pinnista
         ja talletetaan se tuon globaalin indeksi -muuttujan
         osoittamaan paikkaan naytetaulukossa = sampleTable
       - Jos taulukko tulee täyteen eli 200 naytetta on otettu
         niin sitten pitää muuttaa naytteetOtettu -muuttujaa 
         siten, että tänne ei tulla ennenkuin naytteet on
         tulostettu pois taulukosta. Tämä kannattaa
         varmistaa vielä siten, että disabloidaan keskeytykset
         
     */
     
}



void loop()
{
   
    Serial.print(kellonAika);
   //tulostaNaytteet();   // tämä aliohjelma tarkistaa onko aika tulostaa näytteet
                        // ja jos on, niin se tulostaa sitten näytteet sarjaväylälle
                        // tulostettuaa näytteet aliohjelma käynnistää näytteistyksen 
                        // ja kirjoittaa vielä 8-bittisen merkin, jonka jännitearvot
                        // tulevat sitten nauhoitettua sarjaväylältä, jos olet
                        // kytkenyt piuhan Arduinon TX pinnistä (pinni 1) Arduinon
                        // analogiseen pinniin A0
   
  //delay(200);          // Tämä siksi, että tulosta on helpompi seurata serial plotterilta.
   
}

void alustaTimer(void)
{
  noInterrupts(); // Disabloidaan keskeytykset alustuksen ajaksi

  TCCR1A = 0; //Alustetaan nämä kaksi keskeistä kontrollirekisteriä
  TCCR1B = 0; // ensin nollaksi

  TCCR1B |= (1 << WGM12); // Tämä bitti päälle ja timer on CTC moodissa
  // Eli tarkoittaa sitä, että timer
  // juoksee OCR1A rekisterin lukemaan asti
  // ja pyörähtää sitten nollaan, josta laskenta jatkuu
  // jaetaan timerin kello 8:lla => ehtii tiksuttaa 2 000 000 kertaa/s.
  TCCR1B |= (1 << CS10); //Näillä kahdella bitillä B-rekisterissä
  TCCR1B |= (0 << CS11); //Näillä kahdella bitillä B-rekisterissä
  TCCR1B |= (1 << CS12); //asetetaan kellon jako 8:lla

  
  OCR1A = 15625;        /* Vertailurekisteriin pitää osata laittaa oikea arvo
                         siten, että keskeytystahdiksi tulee haluttu 10000 
                         keskeytystä/sekuntti. Eli kysytään siis sitä, ett
                         kuinka monta kertaa timeri, joka käy tahdilla
                         2000 000 tiksua/s ehtii lyödä 0.0001 sekunnin aikana
                       */
  
  TIMSK1 |= (1 << OCIE1A); //Timer HW:sta enabloidaan Output Compare Interrupt Enable

  interrupts(); //Sallitaan keskeytykset alustuksen päätyttyä
}

 void kellonAika(void)
{

      //noInterrupts();
      if (myTime >1000) {
        serial.print(sekunnit);
      }

    if (SEKUNNIT_PITUUS>60){
      serial.print(minuutit);
    }

    if MINUUTIT_PITUUS>60){
      serial.print(tunnit);
       }
}
  /*
  for(sekunnit=0; sekunnit<SEKUNNIT_PITUUS; sekunnit++)
        {
          for(minuutit=0; minuutit<MINUUTIT_PITUUS; minuutit++)

            for(tunnit=0; tunnit<TUNNIT_PITUUS; tunnit++)

           boolean naytteetOtettu=true;
        } */
    

    //Serial.println();
    //delay(500);
    //interrupts();
    //naytteetOtettu=false;
    
        /* tähän pitäisi sitten toteuttaa seuraava toiminnallisuus:
         * - Tulosta nauhoitetun taulukon=sampleTable arvot for-luupilla 
         *   sarjaväylälle.
         * - Kun tulostus on tehty lisää viive 500 ms, jonka
         *   aikana viimeinenkin merkki ehtii siirtyä.
         * - Viiveen jälkeen enabloi näytteistys uudelleen (kaksi asiaa tehtävä)  
         * - Enabloinnin jälkeen kirjoita merkki, joka sitten nauhoitetaan. 
         *   HUOM: tämä on jo koodissa tehtynä
         
         
         //Serial.print("K"); // Ja tämä merkin jännite arvot yritetään siis nauhoitt
                 // koska nauhoituksen pitäisi olla nyt käynnissä 
     
     //noInterrupts();
} */
