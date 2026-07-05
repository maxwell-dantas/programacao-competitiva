// task: https://judge.beecrowd.com/en/problems/view/1002

#include <iostream>
#include <iomanip>
 
int main() {
    double pi = 3.14159;
    double r;
    std::cin >> r;
    std::cout << "A=" << std::fixed << std::setprecision(4) << (pi * r * r) << std::endl;
    return 0;
}