﻿#include <iostream>

using namespace std;

void Equation(double a, double b, double c)
{
    double D = (b * b) - (4 * a * c);
    if (D > 0) {
        double x1, x2;
        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;
        cout << "Корни x1 и x2 равны: " << x1 << " и " << x2;
    }
    else if (D == 0) {
        cout << "Корень X равен:" << -b / 2 * a;
    }
    else {
        cout << "Нет корней";
    }
}
    int main() {    
    setlocale(LC_ALL, "Rus");
    
    double a, b, c;
    cout << "Введите значение a: "; cin >> a;
    cout << "Введите значение b: "; cin >> b;
    cout << "Введите значение c: "; cin >> c;
    Equation(a, b, c);

}


