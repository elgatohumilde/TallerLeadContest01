#include <bits/stdc++.h>

using namespace std;

int main() {
    bool doable = true;
    int N;
    cin >> N;
    string s, t;
    map<string, int> m;
    vector<pair<string, string>> vec;

    while (N--) {
        cin >> s >> t;
        vec.push_back(make_pair(s, t));
        m[s] += 1;
        if (s != t)
            m[t] += 1;
    }

    for (auto pair : vec) {
        if (m[pair.first] > 1 && m[pair.second] > 1) {
            doable = false;
            break;
        }
    }

    cout << ((doable) ? "Yes" : "No") << "\n";
}
