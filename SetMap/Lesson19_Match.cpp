#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    map<string, multiset<string>> ans;
    while(n--){
        string match;
        getline(cin, match);
        auto posSlash = match.find("-");
        string home = match.substr(0, posSlash - 1);
        string guest = match.substr(posSlash + 2);
        ans[home].insert(guest);
        ans[guest].insert(home);
    }
   
    // for (auto it : ans){
    //     cout << it.first << " : ";
    //     auto v = it.second;   
    //     for (auto mt : v){
    //         if(mt == *v.rbegin()){
    //             cout << mt;
    //         }else {
    //             cout << mt << ", ";
    //         }
    //     }
    //     cout << "\n";
    // }
    for (auto x : ans)
    {
        cout << x.first << " : ";
        auto v = x.second;
        for (auto it = v.begin(); it != v.end(); )
        {
            cout << *it;
            it++;
            if (it != v.end())
                cout << ", ";
        }
        cout << "\n";
    }
    
    return 0;
}