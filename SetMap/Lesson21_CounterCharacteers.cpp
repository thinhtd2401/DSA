
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string name;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    // multiset<int> mlSe;
    // for (int i = 0; i < n; i++){
    //     mlSe.insert(a[i]);
    //     cout << mlSe.count(a[i]) << " ";
    // }

    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cout << ++mp[a[i]] << " ";
    }

    return 0;
}