#include <bits/stdc++.h>

using namespace std;

int main() {
    string n, s;
    cin >> n;
    bool nearlyLN = true;
    long k = 0;

    for (auto c : n) {
        if (c == '7' || c == '4')
            k++;
    }
    s = to_string(k);
    for (auto c : s) {
        if (c != '7' && c != '4') {
            nearlyLN = false;
            break;
        }
    }

    cout << ((nearlyLN) ? "YES" : "NO") << "\n";
}
