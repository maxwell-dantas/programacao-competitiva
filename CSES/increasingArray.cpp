// task: https://cses.fi/problemset/task/1094
#include <iostream>

int main() {
    int n;
    long long x;
    long long ans = 0;
    std::cin >> n;
    int seqNumber[n];

    for (int i = 0; i < n; i++) {
        std::cin >> x;
        seqNumber[i] = x;
    }

    for (int i = 1; i < n; i++) {
        while (seqNumber[i] < seqNumber[i - 1]) {
            ans += 1;
            seqNumber[i] += 1;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}