#include <bits/stdc++.h>

using namespace std;

void solve(long N) {
    if (N == 0)
        return;
    solve(N - 1);
    cout << " " << N << " ";
    solve(N - 1);
}

int main() {
    long N;
    cin >> N;
    solve(N);
}
