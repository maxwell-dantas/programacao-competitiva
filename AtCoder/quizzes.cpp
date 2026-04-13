// task: https://atcoder.jp/contests/abc184/tasks/abc184_b
#include <iostream>
#include <string>

int main() {
    int n, x;
    std::string seq;
    std::cin >> n >> x;
    std::cin >> seq;

    for (size_t i = 0; i < seq.length(); i++) {
        if (seq[i] == 'x') {
            if (x != 0) {
                x -= 1;
            }
        } else {
            x += 1;
        }
    }
    std::cout << x << std::endl;
    return 0;
}