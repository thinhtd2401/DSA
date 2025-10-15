#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    cin >> m;
    set<int> result;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        result.insert(x);
    }

    for (int j = 0; j < m; j++){
        int y;
        cin >> y;
        result.insert(y);
    }

    for (auto it = result.rbegin(); it != result.rend(); it++){
        cout << *it << ' ';
    }
    return 0;
}