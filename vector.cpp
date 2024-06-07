#include "Vector.h"

Vector::Vector(size_t size) : elements(size) {}

size_t Vector::size() const {
    return elements.size();
}

double& Vector::operator[](size_t index) {
    if (index >= elements.size()) {
        throw std::out_of_range("poza zakresem");
    }
    return elements[index];
}

const double& Vector::operator[](size_t index) const {
    if (index >= elements.size()) {
        throw std::out_of_range("poza zakresem");
    }
    return elements[index];
}

Vector Vector::operator+(const Vector& other) const {
    if (elements.size() != other.elements.size()) {
        throw std::invalid_argument("wektory musza miec ten sam rozmiar");
    }
    Vector result(elements.size());
    for (size_t i = 0; i < elements.size(); ++i) {
        result[i] = elements[i] + other[i];
    }
    return result;
}

Vector Vector::operator-(const Vector& other) const {
    if (elements.size() != other.elements.size()) {
        throw std::invalid_argument("wektory musza miec ten sam rozmiar");
    }
    Vector result(elements.size());
    for (size_t i = 0; i < elements.size(); ++i) {
        result[i] = elements[i] - other[i];
    }
    return result;
}

Vector Vector::operator*(double scalar) const {
    Vector result(elements.size());
    for (size_t i = 0; i < elements.size(); ++i) {
        result[i] = elements[i] * scalar;
    }
    return result;
}

void Vector::display() const {
    std::cout << "{ ";
    for (const auto& element : elements) {
        std::cout << element << " ";
    }
    std::cout << "}" << std::endl;
}

void Vector::input() {
    std::cout << "Podaj " << elements.size() << " elementy: ";
    for (auto& element : elements) {
        std::cin >> element;
    }
}
