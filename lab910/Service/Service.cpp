//
// Created by Ioana on 25.04.2022.
//

#include "Service.h"

Service::Service() {

}

Service::~Service() {

}

Service::Service(RepoInFile &r) {
    this->repo = r;

}

void Service::addBiletS(const Bilet &b) {
    repo.addBilet(b);

}

void Service::deleteBiletS(int id) {
    repo.deleteBilet(id);

}

vector<Bilet> Service::getAllS() {
    return repo.getAll();
}

void Service::updateBiletS(Bilet new_bilet, Bilet old_bilet) {
    repo.updateBilet(new_bilet, old_bilet);

}

Bilet Service::getByIdS(int id) {
    return repo.getById(id);
}

void Service::buyTicket(int id, int billtype) {
    bool ok = false;
    for (auto &i: getAllS())
        if (i.getId() == id) {
            ok = true;
            if (money.HowMuchMoney() < billtype - i.getPret())
                throw runtime_error("There is not enough money in the jukebox to give you the change!");
            else {
                int sum = money.HowMuchMoney();
                int nrbanc1 = money.getNrBanc1Ron();
                int nrbanc5 = money.getNrBanc5Ron();
                int nrbanc10 = money.getNrBanc10Ron();
                int nrbanc50 = money.getNrBanc50Ron();
                int nrbanc100 = money.getNrBanc100Ron();
                int change = billtype - i.getPret();
                vector<int> v;
                v.push_back(nrbanc1);
                v.push_back(nrbanc5);
                v.push_back(nrbanc10);
                v.push_back(nrbanc50);
                v.push_back(nrbanc100);
                for (int j = v.size() - 1; j >= 0; j--) {
                    if (change != 0) { if (v[j] <= change){change=change-v[j];} }
                }
            }

        }
    if (!ok)
        throw runtime_error("No entity with that id was found !");

}

vector<Bilet> Service::listProductByaGivenCode(string code) {
    vector <Bilet> ret;
    for(auto &b:repo.getAll())
        if(b.getCod()==code)
            ret.push_back(b);

    return ret;
}
