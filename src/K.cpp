#include <bits/stdc++.h>

using namespace std;

void get_result(long &result, long &c, deque<pair<long, long>> &dq) {
    long m = min(c, dq.front().second);
    result += dq.front().first * m;
    dq.front().second -= m;
    c -= m;

    if (dq.front().second == 0)
        dq.pop_front();

    if (c <= 0)
        return;

    get_result(result, c, dq);
}

int main() {
    deque<pair<long, long>> dq;
    long q, i, c, x;
    long result = 0;
    cin >> q;
    while (q--) {
        cin >> i;

        if (i == 1) {
            cin >> x;
            cin >> c;

            dq.push_back(make_pair(x, c));
        }
        if (i == 2) {
            cin >> c;

            get_result(result, c, dq);

            cout << result << "\n";
            result = 0;
        }
    }
}
