#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>
#include <iostream>

class Produit {
private:
    std::string nom;
    double prix;
    int quantite;

public:
    Produit(const std::string& n, double p, int q);
    friend std::ostream& operator<<(std::ostream& os, const Produit& prod);
};

#endif
