// task: https://judge.beecrowd.com/en/problems/view/1015

#include <iostream>
#include <cmath>
#include <iomanip>

struct coordinates {
    double x, y;

    coordinates(double x, double y) {
        this->x = x; this->y = y;
    }

    double distance(coordinates &a) {
        return std::sqrt(std::pow((a.x - this->x), 2) + std::pow((a.y - this->y), 2));
    }
};

int main() {
    double x1, y1;
    double x2, y2;
    
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;

    coordinates p1(x1, y1);
    coordinates p2(x2, y2);

    std::cout << std::fixed << std::setprecision(4) << p1.distance(p2) << std::endl;
    return 0;
}