
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string x;
    set<string> se;
    map<string, int> mp;
    while (n--){
        cin >> x;
        se.insert(x);
        mp[x]++;
    }

    // cout << se.size() << "\n";
    // for (auto it : se){
    //     cout << it << " ";
    // }

    cout << mp.size() << "\n";
    for(auto it : mp){
        cout << it.first << " ";
    }

    return 0;
}