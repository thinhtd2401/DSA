
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<pair<int,int>, int> mp;
    while (n--){
        int x, y;
        cin >> x >> y;
        mp[{x, y}]++;
    }
    for (auto it : mp){
        cout << it.first.first << " " << it.first.second << " " << it.second << "\n";
    }
    return 0;
}