#include "Rational.h"
#include <iostream>

Rational::Rational() : a(0), b(1) {}

Rational::Rational(int a, int b) : a(a), b(b) {
    Reduce(); //  ���������� �����,(��� �������� ��'����)*
}

double Rational::value() const {
    return static_cast<double>(a) / b;
}

Rational Rational::add(const Rational& r) const  //add (��������� ���)
{ 
    Rational tmp;
    tmp.a = a * r.b + b * r.a;
    tmp.b = b * r.b;  
    tmp.Reduce(); 
    return tmp;
}

Rational Rational::sub(const Rational& r) const  //sub (��������� ���)
{ 
    Rational tmp;  
    tmp.a = a * r.b - b * r.a;
    tmp.b = b * r.b;
    tmp.Reduce(); 
    return tmp;
}

Rational Rational::mul(const Rational& r) const  //mul (��������� ���)
{ 
    Rational tmp;
    tmp.a = a * r.a;
    tmp.b = b * r.b;
    tmp.Reduce(); 
    return tmp;
}

void Rational::Reduce() 
{
    int gcd = 1; //  ��������� ������� ������
   
    for (int i = 1; i <= std::min(abs(a), abs(b)); ++i)
    {
        if (a % i == 0 && b % i == 0) 
        {
            gcd = i;
        }
    }
    
    a /= gcd;// ����� �� ��������� �������� ������
    b /= gcd;
}

void Rational::display() const {
    std::cout << a << "/" << b;
}
