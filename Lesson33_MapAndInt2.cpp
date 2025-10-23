
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int x;
    int a[n];
    set<int> se;
    map<int, int> mp;
    for (int i = 0; i < n ; i++) {
         cin >> x;
        a[i] = x;
        se.insert(x);
        mp[x]++;
    }
    
    for (int i = 0; i < n; i++){
        if (se.find(a[i]) != se.end()){
            auto it = mp.find(a[i]);
            cout << (*it).first << " " << (*it).second << "\n"; 
            se.erase(a[i]); 
        }
    }
    return 0;
}