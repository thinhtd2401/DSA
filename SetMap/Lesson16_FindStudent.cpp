#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    map<string, string> mp;
    for (int i = 0; i < n; i++){
        string id, name;
        getline(cin, id);
        getline(cin, name);
        mp[id] = name;
    }
    int q;
    cin >> q;
    while(q--){
        string key;
        cin >> key;
        auto it = mp.find(key);
        if (it == mp.end()){
            cout << "NOT FOUND\n";
        }else {
            cout << (*it).second << "\n";
        }
    }
    return 0;
}