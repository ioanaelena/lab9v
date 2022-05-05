//
// Created by Ioana on 27.04.2022.
//

#include "RepoInFile.h"
#include <fstream>

RepoInFile::RepoInFile() {

}


RepoInFile::~RepoInFile() {
    fstream f(filename);
    if (f.is_open())
        f.close();
}

void RepoInFile::addBilet(const Bilet &b) {
    this->vect.push_back(b);
    this->save();
}

vector<Bilet> RepoInFile::getAll() {
    return vect;
}

void RepoInFile::deleteBilet(int id) {
    for (int i = 0; i < vect.size(); i++)
        if (vect[i].getId() == id)
            for (int j = i; j < vect.size() - 1; j++)
                vect[j] = vect[j + 1];
    this->vect.pop_back();
    this->save();
}

void RepoInFile::updateBilet(Bilet &new_bilet, Bilet &old_bilet) {
    for (auto & i : vect)
        if (i.getId() == old_bilet.getId())
            i = new_bilet;
    this->save();
}

 Bilet RepoInFile::getById(int i) {
    for(int j=0;j<vect.size();j++)
        if(vect[j].getId()==i)
            return vect[j];
    throw std::runtime_error("No entity with specified id found");

}

RepoInFile::RepoInFile(const string &f_name) {
    this->filename = f_name;
    ifstream f(f_name);
    while (f.is_open()) {
        int id;
        string cod;
        string zi;
        int pret;
        f >> id >> cod >> zi >> pret;
        if (!cod.empty()) {
            Bilet e(id, cod, zi, pret);
            this->vect.push_back(e);
        }
        if(f.eof())
            f.close();
    }

}

void RepoInFile::save() {
    ofstream g(this->filename);
    for (Bilet b: vect)
    {
        g<<b.getId()<<" "<<b.getCod()<<" "<<b.getZi()<<" "<<b.getPret()<<endl;
    }
    g.close();

}

int RepoInFile::size_file() {
    return (int)vect.size();
}


