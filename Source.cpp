#include <iostream>
#include "Rational.h"
using namespace std;

int main() {
    Rational r1(3, 4);
    Rational r2(2, 5);

    // �����
    Rational sum = r1.add(r2);
    cout << "Sum: ";
    sum.display();
    cout << endl;

    // ³�����
    Rational diff = r1.sub(r2);
    cout << "Difference: ";
    diff.display();
    cout << endl;

    // �������
    Rational multiplication = r1.mul(r2);
    cout << "multiplication: ";
    multiplication.display();
    cout << endl;

    return 0;
}