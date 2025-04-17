#include <bits/stdc++.h>

using namespace std;

int main() {
    int min_NNinteger = 0;
    int q, n;
    cin >> q;
    map<int, int> m;

    while (q--) {
        cin >> n;
        m[n] = 1;
    }

    while (true) {
        if (m[min_NNinteger])
            min_NNinteger++;
        if (!m[min_NNinteger])
            break;
    }

    cout << min_NNinteger << "\n";
}
