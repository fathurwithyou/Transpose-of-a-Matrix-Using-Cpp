#include <bits/stdc++.h>
#define fathurwithyou            \
    ios::sync_with_stdio(false); \
    cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
    return;
}

int main() {
    fathurwithyou solve();
    return 0;
}
