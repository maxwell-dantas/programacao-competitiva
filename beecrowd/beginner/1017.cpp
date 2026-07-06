// task: https://judge.beecrowd.com/en/problems/view/1017

#include <iostream>
#include <iomanip>

int main() {
    int hours, average;

    std::cin >> hours >> average;

    std::cout << std::fixed << std::setprecision(3) << hours * average / 12.0 << std::endl;
    return 0;
}