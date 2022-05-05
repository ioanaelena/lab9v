//
// Created by Ioana on 20.04.2022.
//

#ifndef LAB9_10Ioana_PRODUS_H
#define LAB9_10Ioana_PRODUS_H

#include <string>
#include <iostream>
using namespace std;

class Bilet {
private:
    int id;
    string cod;
    string zi;
    int pret;
public:
    Bilet();

    ~Bilet();

    Bilet(const Bilet &p);

    Bilet(int id, string cod, string zi, int pret);

    int getId() const;

    void setId(int id);

    string getCod() const;

    void setCod(string cod);

    int getPret() const;

    void setPret(int pret);

    void setZi(string zi);

    string getZi() const;

    bool operator==(const Bilet &b) const;

    Bilet &operator=(const Bilet &b);

    friend ostream &operator<<(ostream &out, Bilet &b);
};


#endif //LAB9_10Ioana_PRODUS_H
