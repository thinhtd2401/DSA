
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >>  n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        mp[a[i]]++;
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        if ((*it).second % 2 == 0){
            cout << (*it).first << " " << (*it).second << "\n";
        }
    }
    cout << "\n";

    for (auto it = mp.rbegin(); it != mp.rend(); it++){
        if ((*it).second % 2 == 0){
            cout << (*it).first << " " << (*it).second << "\n";
        }
    }
    
    return 0;
}