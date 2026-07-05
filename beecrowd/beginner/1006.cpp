// task: https://judge.beecrowd.com/en/problems/view/1006

#include <iostream>
#include <iomanip>
 
int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << (a * 2.0 + b * 3.0 + c * 5.0) / 10 << std::endl;
    return 0;
}