// task: https://cses.fi/problemset/task/1083
#include <iostream>
 
int main() {
    int n, entrada;
    long long somaSequencia = 0;
    std::cin >> n;
 
    for (int i = 0; i < n - 1; i++) {
        std::cin >> entrada;
        somaSequencia += entrada;
    }
 
    long long somaPA = (1 + (long long)n) * n / 2; // 50001 * 25000
    std::cout << somaPA - somaSequencia << std::endl;
}