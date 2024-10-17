# Integral Approximation Visualization
Program to demonstrate the differences between Riemann Sum integral approximation methods; left endpoint, midpoint, right endpoint, and trapezoidal approximation. Using the function x^2 the user can input integration bounds to see how these methods differ in estimating the area under the curve.

# Built With
* C++

## Files
### main.cpp
- Program to demonstrate the differences between Riemann Sum integral approximation methods; left endpoint, midpoint, right endpoint, and trapezoidal approximation.
  - `function(double x)`: Defines the function f(x)=x^2 to be integrated.
  - `leftRule(double a, double b, int n)`: Computes the area under the curve using the left endpoint Riemann sum.
  - `rightRule(double a, double b, int n)`: Computes the area using the right endpoint Riemann sum.
  - `midpointRule(double a, double b, int n)`: Computes the area using the midpoint Riemann sum.
  - `trapezoidalRule(double a, double b, int n)`: Computes the area using the trapezoidal approximation.
  - `main()`: Entry point that handles user input for integration bounds and number of intervals and output.

# Reference
* https://en.wikipedia.org/wiki/Riemann_sum
* https://openstax.org/books/calculus-volume-1/pages/5-1-approximating-areas

# Closer Look
![integral-approximation-visualization-gif](https://github.com/RobertxPearce/Integral-Approximation-Visualization/assets/102342225/2f1402e2-0955-4814-b601-69f31998f008)
