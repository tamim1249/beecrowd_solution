#include <iostream>
#include <vector>

using namespace std;

int main() {
    int K;
    cin >> K;

    vector<int> fib;
    fib.push_back(1);
    fib.push_back(1);

    vector<int> fibonot;
    int next_fib = 2;

    while (fibonot.size() < K) {
        int next = fib[fib.size() - 1] + fib[fib.size() - 2];

        while (next_fib < next) {
            fibonot.push_back(next_fib);
            next_fib++;
        }

        fib.push_back(next);
        next_fib++;
    }

    cout << fibonot[K - 1] << endl;

    return 0;
}
