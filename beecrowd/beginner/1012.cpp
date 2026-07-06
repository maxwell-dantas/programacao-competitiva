// task: https://judge.beecrowd.com/en/problems/view/1012

#include <iostream>
#include <iomanip>

struct area{
    constexpr static double PI = 3.14159;

    static double triangle(double base, double height) {
        return base * height / 2.0;
    }

    static double circle(double radius) {
        return PI * radius * radius;
    }

    static double trapezium(double baseA, double baseB, double height) {
        return (baseA + baseB) * height / 2.0;
    }

    static double square (double side) {
        return side * side;
    }

    static double rectangle (double sideA, double sideB) {
        return sideA * sideB;
    }
};

int main() {
    double a, b, c;

    std::cin >> a >> b >> c;

    std::cout << std::fixed << std::setprecision(3) <<
        "TRIANGULO: "<< area::triangle(a, c) << '\n' <<
        "CIRCULO: " << area::circle(c) << '\n' <<
        "TRAPEZIO: " << area::trapezium(a, b, c) << '\n' <<
        "QUADRADO: " << area::square(b) << '\n' <<
        "RETANGULO: " << area::rectangle(a, b) <<
    std::endl;

    return 0;
}