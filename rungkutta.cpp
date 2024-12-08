#include <iostream>
#include <iomanip>
using namespace std;

// Define the differential equation dy/dx = f(x, y)
double f(double x, double y) {
    return x + y; // Example: dy/dx = x + y
}

// Runge-Kutta 4th Order Method
void rungeKutta(double x0, double y0, double xn, double h) {
    int n = (xn - x0) / h; // Number of steps
    double x = x0, y = y0;

    cout << "x\t\ty\n";
    cout << fixed << setprecision(6);

    for (int i = 0; i <= n; i++) {
        cout << x << "\t" << y << endl;

        double k1 = h * f(x, y);
        double k2 = h * f(x + h / 2.0, y + k1 / 2.0);
        double k3 = h * f(x + h / 2.0, y + k2 / 2.0);
        double k4 = h * f(x + h, y + k3);

        y = y + (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
        x = x + h;
    }
}

int main() {
    double x0, y0, xn, h;

    // Input initial values and step size
    cout << "Enter initial value of x (x0): ";
    cin >> x0;
    cout << "Enter initial value of y (y0): ";
    cin >> y0;
    cout << "Enter the value of x where you want y (xn): ";
    cin >> xn;
    cout << "Enter step size (h): ";
    cin >> h;

    // Call the Runge-Kutta method
    rungeKutta(x0, y0, xn, h);

    return 0;
}
