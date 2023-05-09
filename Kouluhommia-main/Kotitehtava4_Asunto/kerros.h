#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
    public:
        Kerros();
         virtual ~Kerros();
        virtual void maaritaAsunnot();
        virtual double laskeKulutus(double);
    private:
        Asunto * pas1;
        Asunto * pas2;
        Asunto * pas3;
        Asunto * pas4;
};

#endif // KERROS_H
