
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n];
    multiset<int> mse;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        mse.insert(x);
        mp[x]++;
    }

    // for (int i = 0; i < n; i++){
    //    cout << mse.count(a[i]) << " ";
    // }

    for (int i = 0; i < n; i++){
        if (mp.find(a[i]) == mp.end()){
            cout << 0 << " ";
        }else {
            cout << mp[a[i]] << " ";
        }
    }
    return 0;
}