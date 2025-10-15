#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    set<int> se;
    int ans[n];
    for (int i = n - 1; i >= 0; i--){
        se.insert(a[i]);
        ans[i] = se.size();
    }
    int q;
    cin >> q;
    while(q--){
        int l;
        cin >> l;
        cout << ans[l] << "\n";
    }
    return 0;
}