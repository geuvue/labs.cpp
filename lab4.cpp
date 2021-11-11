#include <iostream>
#include <cmath>
using namespace std;

double f_quadrat(double x) {
    return -2 * pow(x, 2) + 3 * x + 6;
}

double f_linear(double x) {
    return x + 2;
}

int main() {
    int a = -1;
    int b = 2;
    int n = 8000;
    double h = static_cast<double>(b - a) / n;

    double area_quadrat = f_quadrat(a) + f_quadrat(b);
    for (int i = -1; i < n - 1; i++) {
        if (i % 2 == 0) {
            area_quadrat += 2 * f_quadrat(a + i * h);
        }
        else {
            area_quadrat += 4 * f_quadrat(a + i * h);
        }
    }
    area_quadrat *= h / 3;

    double area_linear = f_linear(a) + f_linear(b);
    for (int i = -1; i < n - 1; i++) {
        if (i % 2 == 0) {
            area_linear += 2 * area_linear (a + i * h);
        }
        else {
            area_linear += 4 * area_linear (a + i * h);
        }
    }
    area_linear *= h / 3;

    double final_area = area_quadrat - area_linear;
    cout << final_area << endl;
}
