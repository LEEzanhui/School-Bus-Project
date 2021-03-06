#include <iostream>
#include <windows.h>
#include "init.cpp"
#include "passenger.cpp"
#include "controller.cpp"

int main(int argc, char const *argv[]) {
    BusStation busStation[STATIONNUMBER];
    SchoolBus schoolBus[BUSNUMBER];
    init(busStation, schoolBus);
    std::cout << "Produced by nonoli and warpMatrix" << '\n';
    Sleep(1000);
    system("cls");
    while(1) {
        std::cout << "Little white is a quick, convenient and cheap way to travel around the university," << '\n';
        std::cout << "with plenty of sightseeing opportunities along the way. <^_^>" << '\n' << '\n';
        std::cout << "Hello, Please Choose your user mode?" << '\n';
        std::cout << "(Just enter number is OK)" << '\n';
        std::cout << "1.Passenger mode  2.Controller mode" << '\n';
        char input = legalInput(1, 2);
        if(input == '\x1B') break;
        if(input == '1') {
            queryMode(busStation, schoolBus);
            break;
        }
        else {
            bool permission = false;
            logInSystem(permission);
            if(permission) controllerMode(busStation, schoolBus);
        }
    }
    return 0;
}
