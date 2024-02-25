#pragma once
class Rational
{
private:
    int a, b;
    void Reduce(); // приватний метод,скорочення дробу
public:
    Rational(); // конструктор за замовчуванням
    Rational(int a, int b); // конструктор з параметрами
    double value() const; //  обчислення значення дробу
    Rational add(const Rational& r) const; //  додавання дробів
    Rational sub(const Rational& r) const; //  віднімання дробів
    Rational mul(const Rational& r) const; //  множення дробів
    void display() const; // метод для виведення дробу
};
