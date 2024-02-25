#pragma once
class Rational
{
private:
    int a, b;
    void Reduce(); // ��������� �����,���������� �����
public:
    Rational(); // ����������� �� �������������
    Rational(int a, int b); // ����������� � �����������
    double value() const; //  ���������� �������� �����
    Rational add(const Rational& r) const; //  ��������� �����
    Rational sub(const Rational& r) const; //  �������� �����
    Rational mul(const Rational& r) const; //  �������� �����
    void display() const; // ����� ��� ��������� �����
};
