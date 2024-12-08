#include <iostream>
#include <cmath>
using namespace std;

// Function to integrate
double f(double x) {
    return x * x; // Example: f(x) = x^2
}

// Simpson's 1/3 Rule Implementation
double simpsonsOneThirdRule(double a, double b, int n) {
    if (n % 2 != 0) {
        cout << "Number of intervals must be even!" << endl;
        return -1;
    }

    double h = (b - a) / n; // Calculate step size
    double sum = f(a) + f(b); // Add first and last terms

    // Sum the terms with coefficients 4 and 2
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 2 == 0) {
            sum += 2 * f(x); // Even indices
        } else {
            sum += 4 * f(x); // Odd indices
        }
    }

    return (h / 3) * sum; // Multiply by h/3
}

int main() {
    double a, b;
    int n;

    // Input the limits of integration and number of intervals
    cout << "Enter the lower limit (a): ";
    cin >> a;
    cout << "Enter the upper limit (b): ";
    cin >> b;
    cout << "Enter the number of subintervals (n): ";
    cin >> n;

    // Compute the integral using Simpson's 1/3 Rule
    double result = simpsonsOneThirdRule(a, b, n);

    // Output the result
    if (result != -1) {
        cout << "The integral value is: " << result << endl;
    }

    return 0;
}
