
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >>  n;
    map<string, int> mp;
    for (int i = 0; i < n; i++){
        string name;
        cin >> name;
        mp[name]++;
    }

    pair<string, int> min = (*mp.begin());
    pair<string, int> max = (*mp.begin());
    for (auto it : mp){
        cout << it.first << " " << it.second << "\n";
        if (it.second > max.second){
            max = it;
        }
        if (it.second < min.second){
            min = it;
        }
    }
    cout << "\n";

    cout << min.first << " " << min.second << "\n";
    cout << max.first << " " << max.second;
    return 0;
}