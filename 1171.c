#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> countMap;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        countMap[num]++;
    }

    for (const auto& pair : countMap) {
        cout << pair.first << " aparece " << pair.second << " vez(es)" << endl;
    }

    return 0;
}
