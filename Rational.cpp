#include "Rational.h"
#include <iostream>

Rational::Rational() : a(0), b(1) {}

Rational::Rational(int a, int b) : a(a), b(b) {
    Reduce(); //  скорочення дробу,(при створенні об'єкту)*
}

double Rational::value() const {
    return static_cast<double>(a) / b;
}

Rational Rational::add(const Rational& r) const  //add (скорочуємо дріб)
{ 
    Rational tmp;
    tmp.a = a * r.b + b * r.a;
    tmp.b = b * r.b;  
    tmp.Reduce(); 
    return tmp;
}

Rational Rational::sub(const Rational& r) const  //sub (скорочуємо дріб)
{ 
    Rational tmp;  
    tmp.a = a * r.b - b * r.a;
    tmp.b = b * r.b;
    tmp.Reduce(); 
    return tmp;
}

Rational Rational::mul(const Rational& r) const  //mul (скорочуємо дріб)
{ 
    Rational tmp;
    tmp.a = a * r.a;
    tmp.b = b * r.b;
    tmp.Reduce(); 
    return tmp;
}

void Rational::Reduce() 
{
    int gcd = 1; //  найбільший спільний дільник
   
    for (int i = 1; i <= std::min(abs(a), abs(b)); ++i)
    {
        if (a % i == 0 && b % i == 0) 
        {
            gcd = i;
        }
    }
    
    a /= gcd;// ділимо на найбільший сппільний дільник
    b /= gcd;
}

void Rational::display() const {
    std::cout << a << "/" << b;
}
