#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"

class Katutaso: public Kerros
{
    public:
        Katutaso();
        ~Katutaso();
        virtual void maaritaAsunnot() override;
        virtual double laskeKulutus(double) override;
    private:
        Asunto * pas1;
        Asunto * pas2;
};

#endif // KATUTASO_H
