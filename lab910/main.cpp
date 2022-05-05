#include <iostream>
#include "Tests/Tests.h"
#include "UI/UI.h"
#include "Repo/RepoInFile.h"
#include "Repo/RepoInMemory.h"
#include "Repo/IRepo.h"
#include "Service/Service.h"
#include "Money/Money.h"
#include <fstream>
using namespace std;
int main() {
    test_all();
    RepoInFile repo(R"(C:\Users\Ioana\CLionProjects\lab910\bilete1.txt)");
    Service service(repo);
    UI ui(service);
    Money m(5,4,5,20,6);
    ui.runMenu();



}