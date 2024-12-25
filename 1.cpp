#include <iostream>
using namespace std;
//dy/dx = f(x, y)
double f(double x, double y) {
    return x + y;
}
void Eiler(double x0, double y0, double h, double b) {
    double x = x0;
    double y = y0;
    cout << "x\t\ty" << endl;
    cout << x << "\t\t" << y << endl;
    while (x < b) {
        y += h * f(x, y); 
        x += h;
        cout << x << "\t\t" << y << endl; //текущие значения
    }
}
int main()
{
  setlocale(LC_ALL, "Russian");
  double x0, y0, h, b;
    cout << "Введите начальное значение x: " << endl;
    cin >> x0;
    cout << "Введите начальное значение y): " << endl;
    cin >> y0;
    cout << "Введите шаг h: " << endl;
    cin >> h;
    cout << "Введите конечное значение b: " << endl;
    cin >> b;
    Eiler(x0, y0, h, b);
    return 0;
}