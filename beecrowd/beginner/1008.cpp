// task: https://judge.beecrowd.com/en/problems/view/1008

#include <iostream>
#include <iomanip>

int main() {
    int number, hour;
    double hourly_rate;
    std::cin >> number >> hour >> hourly_rate;
    std::cout << "NUMBER = " << number << "\n" <<
        "SALARY = U$ " << std::fixed << std::setprecision(2) << hourly_rate * hour << std::endl;
    return 0;
}