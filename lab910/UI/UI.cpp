//
// Created by Ioana on 27.04.2022.
//

#include "UI.h"
#include "../Money/Money.h"

UI::UI() = default;

UI::~UI() = default;

void UI::addBiletUi() {
    int id;
    string cod;
    string zi;
    int pret;
    cout << "Enter id:" << endl;
    cin >> id;
    cout << "Enter ticket code:" << endl;
    cin >> cod;
    cout << "Enter ticket day:" << endl;
    cin >> zi;
    cout << "Enter the price of the ticket" << endl;
    cin >> pret;
    Bilet bilet(id, cod, zi, pret);
    serv.addBiletS(bilet);
}

void UI::deleteBiletUi() {
    cout << "Give the id of the ticket you want to delete:" << endl;
    int id;
    cin >> id;
    serv.deleteBiletS(id);
}

void UI::listAllUi() {
    vector<Bilet> v;
    v = serv.getAllS();
    for (auto &i: v)
        cout << i;

}

void UI::updateBiletUi() {
    int idvechi;
    string cod;
    string zi;
    int pret;
    cout << "Give the id for the ticket you want to update:" << endl;
    int id;
    cin >> idvechi;
    cout << "Enter new id:" << endl;
    cin >> id;
    cout << "Enter new ticket code:" << endl;
    cin >> cod;
    cout << "Enter new ticket day:" << endl;
    cin >> zi;
    cout << "Enter new the price of the ticket" << endl;
    cin >> pret;
    Bilet bilet(id, cod, zi, pret);
    for (auto &bil: serv.getAllS()) {
        if (idvechi == bil.getId()) {
            serv.updateBiletS(bilet, bil);
        }
    }

}

void UI::Options() {
    cout << "1.Add Bilet" << endl;
    cout << "2.Delete Bilet" << endl;
    cout << "3.Update Bilet" << endl;
    cout << "4.Buy Bilet" << endl;
    cout << "5.List all Bilet" << endl;
    cout << "6.List all tickets by a given code " << endl;
    cout << "x.Exit" << endl;
}

void UI::runMenu() {
    char option;
    bool ok = true;
    vector<Bilet> v;
    while (ok) {
        Options();
        cout << "Give the option you want: ";
        cin >> option;
        switch (option) {
            case '1': {
                addBiletUi();
                break;
            }
            case '2': {
                deleteBiletUi();
                break;
            }
            case '3': {
                updateBiletUi();
                break;
            }
            case '4': {

                break;
            }

            case '5': {
                listAllUi();
                break;
            }
            case '6': {
                listTicketsByAGivenName();
                break;
            }
            case 'x': {
                ok = false;
                break;
            }
            default:
                cout << "Wrong option! Try again!" << endl;
        }
    }
}

void UI::buyBilet() {
    cout << "Enter the id of the ticket you want to buy:" << endl;
    int id;
    cin >> id;
    cout << "Enter the bill note";
    int billType;
    cin >> billType;

}

void UI::listTicketsByAGivenName() {
    cout << "Enter the code of the ticket you want to take:" << endl;
    string code;
    cin >> code;
    vector<Bilet> v;
    v = serv.listProductByaGivenCode(code);
    for (auto &b: v)
        cout << b;
}

UI::UI(Service &ser) {
    this->serv = ser;
}


