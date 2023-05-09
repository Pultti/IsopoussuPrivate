#ifndef POSTILAATIKKO_H
#define POSTILAATIKKO_H
#include <string>

class Postilaatikko
{
public:
    Postilaatikko();  // constructor
    ~Postilaatikko(); // destructor
    void lisaaPosti(int);
    void otaPosti(int);
    void asetaNimi(std::string);
    std::string palautaNimi(void);

    std::string osoite;
    std::string nimi;

private:
    int maara;

};

#endif // POSTILAATIKKO_H
