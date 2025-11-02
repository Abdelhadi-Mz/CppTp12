#ifndef VECTEUR2D_H
#define VECTEUR2D_H

class Vecteur2D {
private:
    double x;
    double y;

public:
    Vecteur2D(double a = 0, double b = 0);
    Vecteur2D operator+(const Vecteur2D& v) const;
    void afficher() const;
};

#endif
