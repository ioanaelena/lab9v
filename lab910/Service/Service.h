//
// Created by Ioana on 25.04.2022.
//

#ifndef LAB910_SERVICE_H
#define LAB910_SERVICE_H
#include "../Repo/RepoInMemory.h"
#include "../Money/Money.h"
#include "../Repo/RepoInFile.h"

class Service {
private:
    RepoInFile repo;
    Money money;
public:
    Service();
    ~Service();
    Service(RepoInFile &r);
    void addBiletS(const Bilet &b);
    void deleteBiletS(int id);
    void updateBiletS(Bilet new_bilet,Bilet old_bilet);
    vector<Bilet> getAllS();
    Bilet getByIdS(int id);
    void buyTicket(int id, int billtype);
    vector <Bilet> listProductByaGivenCode(string code);
};


#endif //LAB910_SERVICE_H
