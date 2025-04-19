#include <bits/stdc++.h>

using namespace std;

char is_even(int n) { return (n % 2 == 0) ? 'p' : 'i'; }

int main() {
    char f, s, t;
    int index;
    int q, n;
    cin >> q;
    int k = q;
    q -= 3;
    cin >> n;
    f = is_even(n);
    cin >> n;
    s = is_even(n);
    cin >> n;
    t = is_even(n);

    if (f == s && t != f) {
        index = 3;
    }

    if (f != s)
        index = (t == f) ? 2 : 1;

    if (f == s && t == f) {
        while (q--) {
            cin >> n;
            if (f != is_even(n)) {
                index = k - q;
                break;
            }
        }
    }

    cout << index << "\n";
}
