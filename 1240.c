#include <iostream>
#include <string>
using namespace std;

bool encaixa(int A, int B) {
    string strA = to_string(A);
    string strB = to_string(B);

    if (strB.length() > strA.length()) {
        return false;
    }

    int diff = strA.length() - strB.length();
    for (int i = 0; i < strB.length(); i++) {
        if (strA[diff + i] != strB[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;

        if (encaixa(A, B)) {
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl;
        }
    }

    return 0;
}
