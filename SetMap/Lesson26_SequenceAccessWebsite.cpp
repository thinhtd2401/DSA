
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<string, int> mp;
    string siteName;
    while(cin >> siteName){
        mp[siteName]++;
    }

    for(auto it : mp){
        cout << it.first << " " << it.second << "\n";
    }

    return 0;
}