
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int x;
    map<int, int> mp;
    while (n--){
        cin >> x;
        mp[x]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second <<"\n";
    }

    return 0;
}