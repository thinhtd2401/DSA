
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
    int n, m;
    cin >> n >> m;
    int a[n];
    set<int> se;
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        se.insert(x);
        mp[x]++;
    }

    string result = "28tech";
    // for (int i = 0; i < n; i++){
    //     if (se.find(a[i]) == se.end()){
    //        cout << "29tech" << " ";
    //     }else {
    //         cout << "28tech" << " ";
    //     }
    // }

    for (int i = 0; i < n; i++){
        if (mp.find(a[i]) == mp.end()){
            cout << "29tech" << " ";
        }else {
            cout << "28tech" << " ";
        }
    }
    return 0;
}