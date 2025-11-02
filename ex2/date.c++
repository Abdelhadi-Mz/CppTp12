#include <iostream>
#include "date.h"

Date::Date(int j, int m, int a) : jour(j), mois(m), annee(a) {}

bool Date::operator==(const Date& d) const {
    return (jour == d.jour && mois == d.mois && annee == d.annee);
}

bool Date::operator!=(const Date& d) const {
    return !(*this == d);
}

void Date::afficher() const {
    std::cout << jour << "/" << mois << "/" << annee << std::endl;
}
