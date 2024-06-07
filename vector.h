#ifndef VECTOR_H
#define VECTOR_H

#include <vector>
#include <iostream>
#include <stdexcept>

class Vector {
private:
    std::vector<double> elements;

public:

    Vector(size_t size);


    size_t size() const;


    double& operator[](size_t index);
    const double& operator[](size_t index) const;


    Vector operator+(const Vector& other) const;


    Vector operator-(const Vector& other) const;


    Vector operator*(double scalar) const;


    void display() const;


    void input();
};

#endif // VECTOR_H
