// task: https://judge.beecrowd.com/en/problems/view/1013

#include <iostream>

int maiorABC(int a, int b, int c) {
    int maior = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    return maior;
}

int main() {
    int a, b, c;
    
    std::cin >> a >> b >> c;

    std::cout << maiorABC(a, b, c) << " eh o maior" << std::endl;

    return 0;
}