#include <iostream>
#include <cmath>
using namespace std;

// Function to integrate
double f(double x) {
    return x * x; // Example: f(x) = x^2
}

// Simpson's 3/8 Rule Implementation
double simpsonsThreeEighthRule(double a, double b, int n) {
    if (n % 3 != 0) {
        cout << "Number of intervals must be a multiple of 3!" << endl;
        return -1;
    }

    double h = (b - a) / n; // Calculate step size
    double sum = f(a) + f(b); // Add first and last terms

    // Sum terms with coefficients 3 and 2
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 3 == 0) {
            sum += 2 * f(x); // Coefficient 2 for every third term
        } else {
            sum += 3 * f(x); // Coefficient 3 for other terms
        }
    }

    return (3 * h / 8) * sum; // Multiply by 3h/8
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

    // Compute the integral using Simpson's 3/8 Rule
    double result = simpsonsThreeEighthRule(a, b, n);

    // Output the result
    if (result != -1) {
        cout << "The integral value is: " << result << endl;
    }

    return 0;
}
