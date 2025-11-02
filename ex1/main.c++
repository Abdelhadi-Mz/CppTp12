#include <iostream>
#include "vecteur2d.h"

int main() {
    Vecteur2D v1(3, 4);
    Vecteur2D v2(1, 2);

    Vecteur2D v3 = v1 + v2;

    std::cout << "Vecteur 1: ";
    v1.afficher();
    std::cout << "Vecteur 2: ";
    v2.afficher();
    std::cout << "Vecteur 1 + Vecteur 2: ";
    v3.afficher();

    return 0;
}
