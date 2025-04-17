#include <bits/stdc++.h>

using namespace std;

int main() {
    map<char, int> m;
    int D_letters = 0;
    string s;
    cin >> s;

    for (auto c : s) {
        if (!m[c]) {
            D_letters++;
            m[c] = 1;
        }
    }

    cout << ((D_letters % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!") << "\n";
}
