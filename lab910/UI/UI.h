//
// Created by Ioana on 27.04.2022.
//

#ifndef LAB910_UI_H
#define LAB910_UI_H
#include "../Service/Service.h"

class UI {
private:
    Service serv;
public:
    UI();
    ~UI();
    explicit UI(Service &ser);
    void addBiletUi();
    void deleteBiletUi();
    void listAllUi();
    void updateBiletUi();
    void buyBilet();
    void listTicketsByAGivenName();
    static void Options();
    void runMenu();



};


#endif //LAB910_UI_H
