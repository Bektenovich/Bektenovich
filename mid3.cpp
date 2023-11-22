#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Odds: " << oddCount << endl;
    cout << "Evens: " << evenCount << endl;

    return 0;
}
