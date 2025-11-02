#include <iostream>
#include "date.h"

int main() {
    Date d1(12, 5, 2023);
    Date d2(12, 5, 2023);
    Date d3(1, 1, 2022);

    std::cout << "Date 1: ";
    d1.afficher();
    std::cout << "Date 2: ";
    d2.afficher();
    std::cout << "Date 3: ";
    d3.afficher();

    if (d1 == d2)
        std::cout << "Date 1 et Date 2 sont identiques." << std::endl;
    else
        std::cout << "Date 1 et Date 2 sont différentes." << std::endl;

    if (d1 != d3)
        std::cout << "Date 1 et Date 3 sont différentes." << std::endl;
    else
        std::cout << "Date 1 et Date 3 sont identiques." << std::endl;

    return 0;
}
