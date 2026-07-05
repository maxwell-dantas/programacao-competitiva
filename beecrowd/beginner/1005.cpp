// task: https://judge.beecrowd.com/en/problems/view/1005

#include <iostream>
#include <iomanip>
 
int main() {
    double a, b;
    std::cin >> a >> b;
    std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << (a * 3.5 + b * 7.5) / 11 << std::endl;
    return 0;
}