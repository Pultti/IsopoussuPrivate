#include <iostream>
//#include "asunto.h"
//#include "katutaso.h"
//#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    /*Asunto Asunto;
    Asunto.maarita(2,100);
    Asunto.laskeKulutus(1);

    Kerros kerros;
    Katutaso katutaso;
    katutaso.maaritaAsunnot();
    kerros.maaritaAsunnot();
    cout<<"kulutus,kun hinta =1 on "<<katutaso.laskeKulutus(1)+ kerros.laskeKulutus(1)<<endl;
*/


    Kerrostalo *kerrostaloOlio = new Kerrostalo;
        kerrostaloOlio->maaritaAsunnot();
        kerrostaloOlio->laskeKulutus(1);
        cout<<"Kerrostalon kulutus, = "<<kerrostaloOlio->laskeKulutus(1)<<endl;
        delete kerrostaloOlio;
        kerrostaloOlio = nullptr;

        return 0;
    }


   /* Kerrostalo kerrostaloOlio;
    kerrostaloOlio.maaritaAsunnot();
    kerrostaloOlio.laskeKulutus(1);
    cout<<"Kerrostalon kulutus, = "<<kerrostaloOlio.laskeKulutus(1)<<endl;

    return 0;

} */
