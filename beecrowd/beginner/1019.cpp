// task: https://judge.beecrowd.com/en/problems/view/1019

#include <iostream>

int main() {
    int a[] = {3600, 60};
    int n;

    std::cin >> n;

    for (int seconds : a) {
        int time = n / seconds;
        n -= (time * seconds);
        std::cout << time << ":";
    }

    std::cout << n << std::endl;

    return 0;
}