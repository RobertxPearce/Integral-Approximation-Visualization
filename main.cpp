//-----------------------------------------------
// Riemann Sum Approximation Visualization
// Robert Pearce
// 03/02/2024
//-----------------------------------------------

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//-------------------------
//      Prototypes
//-------------------------

double function(double x);
double leftRule(double a, double b, int n);
double rightRule(double a, double b, int n);
double midpointRule(double a, double b, int n);
double trapezoidalRule(double a, double b, int n);

//-------------------------
//   Main Entry Point
//-------------------------

int main(int argc, char const *argv[])
{
    //-------------------------
    //  Variables Declarations
    //-------------------------

    string dashedLine = "---------------------------------------------------\n";
    double a = 0;
    double b = 0;
    int n = 0;
    double deltaX = 0;
    double leftApprox = 0;
    double rightApprox = 0;
    double midpointApprox = 0;
    double trapezoidalApprox = 0;

    //-------------------------
    //     Input Section
    //------------------------- 

    cout << dashedLine;
    cout << "Riemann Sum Approximation Visualization f(x)=x^2" << endl;
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

    leftApprox = leftRule(a, b, n);
    midpointApprox = midpointRule(a, b, n);
    rightApprox = rightRule(a, b, n);
    trapezoidalApprox = trapezoidalRule(a, b, n);

    //-------------------------
    //     Output Section
    //------------------------- 
    cout << left;
    cout << setw(23) << "Left Endpoint Rule: " << leftApprox << endl;
    cout << setw(23) << "Midpoint Rule: " << midpointApprox << endl;
    cout << setw(23) << "Right Endpoint Rule: " << rightApprox << endl;
    cout << setw(23) << "Trapazoidal Rule: " << trapezoidalApprox << endl;
    cout << dashedLine;

    return 0;
}

//-------------------------
//      Definitions
//-------------------------

/// @brief Function to represent f(x)=x^2.
/// @param x Value of x for function.
/// @return Return x^2.
double function(double x)
{
    return x * x;
}

/// @brief Function to approximate integrals using the left endpoint rule.
/// @param a Lower limit of integral.
/// @param b Upper limit of integral.
/// @param n Number of intervals.
/// @return Returns the approximation using the left endpoint rule.
double leftRule(double a, double b, int n)
{
    double x = 0;
    double deltaX = (b - a) / n;
    double sum = 0;
    
    for (int i = 0; i < n; i++) {
        x = a + deltaX * i;
        sum += function(x);
    }
    return sum * deltaX;
}

/// @brief Function to approximate integrals using the midpoint rule.
/// @param a Lower limit of integral.
/// @param b Upper limit of integral.
/// @param n Number of intervals.
/// @return Returns the approximation using the midpoint rule.
double midpointRule(double a, double b, int n)
{
    double x = 0;
    double deltaX = (b - a) / n;
    double sum = 0;

    for (int i = 0; i < n; i++) {
        x = a + (i + 0.5) * deltaX;
        sum += function(x);
    }
    return sum * deltaX;
}

/// @brief Function to approximate integrals using the right endpoint rule.
/// @param a Lower limit of integral.
/// @param b Upper limit of integral.
/// @param n Number of intervals.
/// @return Returns the approximation using the right endpoint rule.
double rightRule(double a, double b, int n)
{
    double x = 0;
    double deltaX = (b - a) / n;
    double sum = 0;

    for (int i = 1; i < n; i++) {
        x = a + deltaX * i;
        sum += function(x);
    }
    sum += function(b);
    return sum * deltaX;
}

/// @brief Function to approximate integrals using the trapezoidal rule.
/// @param a Lower limit of integral.
/// @param b Upper limit of integral.
/// @param n Number of intervals.
/// @return Returns the approximation using the trapezoidal rule.
double trapezoidalRule(double a, double b, int n)
{
    double x = 0;
    double deltaX = (b - a) / n;
    double sum = (function(a) + function(b));

    for (int i = 1; i < n; i++) {
        double x = a + i * deltaX;
        sum += 2 * function(x);
    }
    return (deltaX / 2) * sum;
}