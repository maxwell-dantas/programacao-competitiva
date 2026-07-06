// task: https://judge.beecrowd.com/en/problems/view/1018

#include <iostream>

int main() {
    int a[] = {100, 50, 20, 10, 5, 2, 1};
    int value;

    std::cin >> value;
    std::cout << value << std::endl;

    for (int nota : a) {
        int qtdNotas = value / nota;
        value -= (qtdNotas * nota);

        std::cout << qtdNotas <<" nota(s) de R$ "<< nota << ",00" << std::endl;
    }

    return 0;
}