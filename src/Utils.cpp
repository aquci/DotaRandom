#ifdef _WIN32
#include <cstdlib>
#else
#include <iostream>
#endif

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
