#include <iostream>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return num > 1;
}

int main() {
    int N;
    cin >> N;
    for (int nextPrime = N + 1; ; nextPrime++)
        if (isPrime(nextPrime)) {
            cout << nextPrime << endl;
            return 0;
        }
}
