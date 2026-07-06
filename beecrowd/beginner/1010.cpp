// task: https://judge.beecrowd.com/en/problems/view/1010

#include <iostream>
#include <iomanip>

struct Product{
    int code, units;
    double price;

    Product(int code, int units, double price) {
        this->code = code;
        this->units = units;
        this->price = price;
    }

    double value() {
        return price * units;
    }
};

int main() {
    int code1, units1, code2, units2;
    double price1, price2;

    std::cin >> code1 >> units1 >> price1;
    std::cin >> code2 >> units2 >> price2;

    Product p1(code1, units1, price1);
    Product p2(code2, units2, price2);

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << p1.value() + p2.value() << std::endl;
    
    return 0;
}