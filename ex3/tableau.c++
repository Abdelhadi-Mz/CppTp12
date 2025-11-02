#include <iostream>
#include "tableau.h"

Tableau::Tableau(int t) : taille(t) {
    data = new int[taille];
}

Tableau::~Tableau() {
    delete[] data;
}

int& Tableau::operator[](int index) {
    if (index < 0 || index >= taille)
        throw std::out_of_range("Index hors limites");
    return data[index];
}

int Tableau::getTaille() const {
    return taille;
}
