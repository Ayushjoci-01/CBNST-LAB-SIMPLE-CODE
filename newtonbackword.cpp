#include<iostream>
#include<cmath>
using namespace std;

// Function to calculate factorial
int fact(int n) {
    int fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    float x[n], y[n][n];

    cout << "Enter the values of x:\n";
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }

    cout << "Enter the values of y:\n";
    for(int i = 0; i < n; i++) {
        cin >> y[i][0];
    }

    // Calculate the backward differences
    for(int j = 1; j < n; j++) {
        for(int i = n - 1; i >= j; i--) {
            y[i][j] = y[i][j-1] - y[i-1][j-1];
        }
    }

    // Input the value of xp to interpolate
    float xp;
    cout << "Enter the value of xp: ";
    cin >> xp;

    // Calculate u
    float u = (xp - x[n-1]) / (x[1] - x[0]);

    // Initialize sum with the last y value
    float sum = y[n-1][0];

    // Calculate the interpolation sum using the backward differences
    for(int i = 1; i < n; i++) {
        float term = u;
        for(int j = 1; j < i; j++) {
            term *= (u + j); // Multiply by (u + j)
        }
        sum += (term * y[n-1][i]) / fact(i); // Add the term divided by factorial(i)
    }

    // Output the result
    cout << "The value of y at x = " << xp << " is " << sum << endl;

    return 0;
}
