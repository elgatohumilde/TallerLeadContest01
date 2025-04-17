#include <bits/stdc++.h>

using namespace std;

int main() {
    int A;
    cin >> A;
    int B;
    cin >> B;
    int C;
    cin >> C;
    int D;
    cin >> D;

    cout << (((A * 3600 + B * 60) % 86400 < (C * 3600 + D * 60 + 1) % 86400)
                 ? "Takahashi"
                 : "Aoki")
         << "\n";
}
