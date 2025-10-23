
#include <bits/stdc++.h>

using namespace std;

string getName(string walletId, map<string,string> inforWallets){
    if(inforWallets.find(walletId) != inforWallets.end()){
        return inforWallets[walletId];
    }
    return "Unknown wallet";
}

class Transaction {
    public:
        string from;
        string to;
        int amount;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    set<int> se;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        mp[a[i]]++;
        se.insert(a[i]);
    }

    cout << se.size() << "\n";
    
    for (auto it = se.rbegin(); it != se.rend(); it++){
        cout << *it << " ";
    }

    // cout << mp.size() << "\n";
    // for (auto it = mp.rbegin(); it != mp.rend(); it++){
    //     cout << it -> first << " ";
    // }
    return 0;
}