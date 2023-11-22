#include <iostream>
using namespace std
int main() {
    int number;
    std::cin >> number;

    int firstThreeDigits = number / 1000;
    int lastThreeDigits = number % 1000;

    int sumFirstThreeDigits = (firstThreeDigits / 100) + (firstThreeDigits % 100 / 10) + (firstThreeDigits % 10);
    int sumLastThreeDigits = (lastThreeDigits / 100) + (lastThreeDigits % 100 / 10) + (lastThreeDigits % 10);

    if (sumFirstThreeDigits == sumLastThreeDigits) {
        cout << "YES" <<endl;
    } else {
        cout << "NO" <<endl; 
    }

    return 0;
}
