// task: https://judge.beecrowd.com/en/problems/view/1014

#include <iostream>
#include <iomanip>

int main() {
    int x;
    double y;
    
    std:: cin >> x >> y;

    std::cout << std::fixed << std::setprecision(3) << x / y << " km/l" << std::endl;

    return 0;
}