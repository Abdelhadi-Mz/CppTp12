#include <iostream>
#include "vecteur2d.h"

Vecteur2D::Vecteur2D(double a, double b) : x(a), y(b) {}

Vecteur2D Vecteur2D::operator+(const Vecteur2D& v) const {
    return Vecteur2D(x + v.x, y + v.y);
}

void Vecteur2D::afficher() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}
