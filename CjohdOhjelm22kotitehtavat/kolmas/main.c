#include <stdio.h>

int main()
{
        int luku=4;
        float paino=75.52;
        char merkki='!';
        //printf("luku on %d. Paino on %f. Merkki on %c \n", luku, paino, merkki);
        int luku2=2;
        int summa;
        int tulos;
        float ftulos;
        //tulos=luku/luku2;
        //ftulos= (float) luku/(float)luku2;
        tulos= luku%luku2;
        printf("tulos on %d\n", tulos);

        return 0;
    }
