#include <iostream>
#include "Vector.h"

int main() {
    size_t size;
    std::cout << "podaj rozmiar wektorow: ";
    std::cin >> size;

    Vector v1(size);
    Vector v2(size);

    std::cout << "podaj elementy wektora v1:\n";
    v1.input();
    std::cout << "podaj elementy wektora v2:\n";
    v2.input();

    Vector v3 = v1 + v2;
    Vector v4 = v1 - v2;
    Vector v5 = v1 * 2.0;

    std::cout << "v1: ";
    v1.display();
    std::cout << "v2: ";
    v2.display();
    std::cout << "v1 + v2: ";
    v3.display();
    std::cout << "v1 - v2: ";
    v4.display();
    std::cout << "v1 * 2.0: ";
    v5.display();

    return 0;
}
