#include <iostream>

using namespace std;

int main() {
    int A, B, N;
    cin >> A >> B >> N;

    int totalCostSom = A * N;
    int totalCostTyiyn = B * N;

    cout << totalCostSom << " som and " << totalCostTyiyn << " tyiyn." << endl;

    return 0;
}