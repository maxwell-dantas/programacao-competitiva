// task: https://cses.fi/problemset/task/1069
#include <iostream>
#include <string>
 
int main() {
    std::string dnaSeq;
    std::cin >> dnaSeq;
    int sequencia = 1;
    int maiorSequencia = 1;
 
    for (size_t i = 1; i < dnaSeq.length(); i++) {
        if (dnaSeq[i] == dnaSeq[i - 1]) {
            sequencia +=1;
        } else {
            if (sequencia > maiorSequencia) {maiorSequencia = sequencia;}
            sequencia = 1;
        }
    }
    if (sequencia > maiorSequencia) {maiorSequencia = sequencia;}
    std::cout << maiorSequencia;
    return 0;
}