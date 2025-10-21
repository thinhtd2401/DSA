
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
    char a[n];
    set<char> se;
    map<char, int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        mp[a[i]]++;
        se.insert(a[i]);
    }

    cout << mp.size() << "\n";

    // cout << *se.rbegin() << " " << *se.begin() << " " << *(++se.rbegin()) << " " << *(++se.begin());

    cout << (*mp.rbegin()).first << " " << (*mp.begin()).first << " " << (*++mp.rbegin()).first << " " << (*++mp.begin()).first; 
    return 0;
}