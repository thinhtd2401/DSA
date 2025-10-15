#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        set<int> uniqueItem;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            uniqueItem.insert(x);
        }
        
        for (int it : uniqueItem) {
            if (i == 0){
                mp[it] = 1;
            }else if (mp[it] == i){
                mp[it]++;
            }
        }
    }
    
    vector<int> result;
    for (pair<int, int> x : mp) {
        if (x.second == n)
            result.push_back(x.first);
    }
    
    if (result.empty()){
        cout << "NOT FOUND";
    }else {
        for (int x: result){
            cout << x << " ";
        }
    }
    
    return 0;
}