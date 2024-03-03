#include <iostream>
#include <cmath>

using namespace std;

//-------------------------
//      Prototypes
//-------------------------

double function(double x);
// double simpsonsRule(double a, double b, int n);
double trapezoidalRule(double a, double b, int n);

//-------------------------
//   Main Entry Point
//-------------------------
int main(int argc, char const *argv[])
{
    //-------------------------
    //  Variables Declarations
    //-------------------------
    string dashedLine = "------------------------------------------------\n";
    double a = 0;
    double b = 0;
    int n = 0;
    double deltaX = 0;
    double trapezoidalApprox = 0;
    double simpsonsApprox = 0;
    //-------------------------
    //     Input Section
    //------------------------- 
    cout << dashedLine;
    cout << "Integral Approximation Visualization f(x)=x^2" << endl;
    cout << dashedLine;
    cout << "Enter the lower limit of integration: ";
    cin >> a;
    cout << "Enter the upper limit of integration: ";
    cin >> b;
    cout << "Enter the number of intervals: ";
    cin >> n;
    cout << dashedLine;
    //-------------------------
    //   Calculation Section
    //------------------------- 
    trapezoidalApprox = trapezoidalRule(a, b, n);
    //-------------------------
    //     Output Section
    //------------------------- 
    cout << "Approximation Using The Simpsons Rule" << endl;
    cout << "Approximation Using The Trapazoidal Rule" << endl;
    cout << trapezoidalApprox << endl;
    cout << dashedLine;

    return 0;
}

//-------------------------
//      Definitions
//-------------------------

/// @brief Function to represent f(x)=x^2.
/// @param x Value of x for function.
/// @return Return x^2.
double function(double x) {
    return x * x;
}

/*
/// @brief 
/// @param a 
/// @param b 
/// @param n 
/// @return 
double simpsonsRule(double a, double b, int n) {

}
*/

/// @brief Function to approximate integrals using the trapezoidal rule.
/// @param a Lower limit of integral.
/// @param b Upper limit of integral.
/// @param n Number of intervals.
/// @return Returns the approximation using the trapezoidal rule.
double trapezoidalRule(double a, double b, int n) {
    double x = a;
    double deltaX = (b - a) * 0.5;
    double sum = (function(a) + function(b));

    for (int i = 0; i < n; i++) {
        x = (i + deltaX);
        cout << x << " = " << i << " + " << deltaX << endl;
        sum += (function(x) * 2);
    }
    return (deltaX * 0.5) * sum;
}