#ifndef DATE_H
#define DATE_H

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    Date(int j = 1, int m = 1, int a = 2000);
    bool operator==(const Date& d) const;
    bool operator!=(const Date& d) const;
    void afficher() const;
};

#endif
