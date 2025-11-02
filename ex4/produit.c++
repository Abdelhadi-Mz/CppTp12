#include "produit.h"

Produit::Produit(const std::string& n, double p, int q) : nom(n), prix(p), quantite(q) {}

std::ostream& operator<<(std::ostream& os, const Produit& prod) {
    os << "Nom : " << prod.nom << ", Prix : " << prod.prix << ", Quantite : " << prod.quantite;
    return os;
}
