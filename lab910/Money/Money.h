//
// Created by Ioana on 5/4/2022.
//

#ifndef LAB910_MONEY_H
#define LAB910_MONEY_H


class Money {
private:
    int nrBanc10Ron;
    int nrBanc100Ron;
    int nrBanc50Ron;
    int nrBanc1Ron;
    int nrBanc5Ron;
public:
    Money();

    ~Money();

    Money(int nrBanc10Ron,
          int nrBanc100Ron,
          int nrBanc50Ron,
          int nrBanc1Ron,
          int nrBanc5Ron);

    int HowMuchMoney();

    int getNrBanc10Ron() const;

    void setNrBanc10Ron(int nrBanc10Ron);

    int getNrBanc100Ron() const;

    void setNrBanc100Ron(int nrBanc100Ron);

    int getNrBanc50Ron() const;

    void setNrBanc50Ron(int nrBanc50Ron);

    int getNrBanc1Ron() const;

    void setNrBanc1Ron(int nrBanc1Ron);

    int getNrBanc5Ron() const;

    void setNrBanc5Ron(int nrBanc5Ron);
};


#endif //LAB910_MONEY_H
