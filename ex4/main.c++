#include <iostream>
#include "produit.h"

int main() {
    Produit p1("parfume", 2.5, 10);
    Produit p2("Cahier", 5.0, 5);

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;

    return 0;
}
