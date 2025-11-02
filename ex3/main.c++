#include <iostream>
#include "tableau.h"

int main() {
    int n;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> n;

    Tableau tab(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Entrez la valeur " << i << " : ";
        std::cin >> tab[i];
    }

    std::cout << "Contenu du tableau : ";
    for (int i = 0; i < n; ++i) {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

    try {
        std::cout << "Acces hors limites test : " << tab[n] << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Exception capturee : " << e.what() << std::endl;
    }

    return 0;
}
