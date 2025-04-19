#include <bits/stdc++.h>

using namespace std;

int main() {
    long q, n;
    long result = 0;
    cin >> q;
    long N = q;
    map<long, long> m;

    while (q--) {
        cin >> n;
        (m[n] || n > N) ? result++ : m[n] = 1;
    }

    cout << result << "\n";
}
