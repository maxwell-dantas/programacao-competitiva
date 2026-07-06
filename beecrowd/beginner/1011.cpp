// task: https://judge.beecrowd.com/en/problems/view/1011

#include <iostream>
#include <iomanip>

int main() {
    const double PI = 3.14159;
    double r;

    std::cin >> r;

    std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << (4.0/3.0) * PI * r * r * r << std::endl; 

    return 0;
}