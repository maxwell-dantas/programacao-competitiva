// task: https://judge.beecrowd.com/en/problems/view/1009

#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string name;
    double salary, sold;

    std::cin >> name >> salary >> sold;
    
    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << salary + (sold * 15 / 100) << std::endl;

    return 0;
}