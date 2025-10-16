#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    map<string, string> studentMap;
    for(int i = 0; i < n; i++){
        string code, name;
        getline(cin, code);
        getline(cin, name);
        studentMap.insert(make_pair(code, name));
    }

    int q;
    cin >> q;
    while(q--){
        string key;
        cin >> key;
        auto it = studentMap.find(key);
        if (it == studentMap.end()){
            cout << "NOT FOUND\n";
        }else {
            cout << (*it).second << "\n";
        }
    }

    return 0;
}