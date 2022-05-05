//
// Created by Ioana on 5/4/2022.
//

#include "Money.h"

Money::Money() {

}

Money::~Money() {

}

int Money::HowMuchMoney() {
    int sum=0;
    sum=getNrBanc1Ron()+getNrBanc5Ron()+getNrBanc10Ron()+getNrBanc50Ron()+getNrBanc100Ron();
    return sum;

}

int Money::getNrBanc10Ron() const {
    return nrBanc10Ron;
}

void Money::setNrBanc10Ron(int nrBanc10Ron) {
    Money::nrBanc10Ron = nrBanc10Ron;
}

int Money::getNrBanc100Ron() const {
    return nrBanc100Ron;
}

void Money::setNrBanc100Ron(int nrBanc100Ron) {
    Money::nrBanc100Ron = nrBanc100Ron;
}

int Money::getNrBanc50Ron() const {
    return nrBanc50Ron;
}

void Money::setNrBanc50Ron(int nrBanc50Ron) {
    Money::nrBanc50Ron = nrBanc50Ron;
}

int Money::getNrBanc1Ron() const {
    return nrBanc1Ron;
}

void Money::setNrBanc1Ron(int nrBanc1Ron) {
    Money::nrBanc1Ron = nrBanc1Ron;
}

int Money::getNrBanc5Ron() const {
    return nrBanc5Ron;
}

void Money::setNrBanc5Ron(int nrBanc5Ron) {
    Money::nrBanc5Ron = nrBanc5Ron;
}

Money::Money(int nrBanc10Ron, int nrBanc100Ron, int nrBanc50Ron, int nrBanc1Ron, int nrBanc5Ron) {
    this->nrBanc1Ron=nrBanc1Ron;
    this->nrBanc5Ron=nrBanc5Ron;
    this->nrBanc10Ron=nrBanc10Ron;
    this->nrBanc100Ron=nrBanc100Ron;
    this->nrBanc50Ron=nrBanc50Ron;

}
