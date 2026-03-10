#include <iostream>
#include <cmath>
using namespace std;

void calRectangle(double length, double width) {
    if (length <= 0 || width <= 0) {
        cout << "Длина и ширина должны быть положительными." << endl;
        return;
    }

    double perimeter = 2 * (length + width);
    double area = length * width;
    double diagonal = sqrt(length * length + width * width);

    cout << "Параметры прямоугольника:" << endl;
    cout << "Длина: " << length << ", Ширина: " << width << endl;
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь: " << area << endl;
    cout << "Длина диагонали: " << diagonal << endl;
}

int main() {
    double a, b;

    cout << "Введите длину прямоугольника: ";
    cin >> a;

    cout << "Введите ширину прямоугольника: ";
    cin >> b;

    calRectangle(a, b);
    return 0;
}