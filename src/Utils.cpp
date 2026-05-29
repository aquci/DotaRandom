#ifdef _WIN32
#include <cstdlib>
#else
#include <iostream>
#endif

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    std::cout << "\033[2J\033[1;1H";
    std::cout.flush();
#endif
}
