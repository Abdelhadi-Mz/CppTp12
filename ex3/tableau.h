#ifndef TABLEAU_H
#define TABLEAU_H

#include <stdexcept>

class Tableau {
private:
    int* data;
    int taille;

public:
    Tableau(int taille);
    ~Tableau();
    int& operator[](int index);
    int getTaille() const;
};

#endif
