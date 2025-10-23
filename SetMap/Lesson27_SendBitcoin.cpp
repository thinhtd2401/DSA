
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
    cin.ignore();
    map<string, string> mp;
    while(n--){
        string name, walletId;
        getline(cin, name);
        getline(cin, walletId);
        mp[walletId] = name;
    }

    int numberTrans;
    cin >> numberTrans;
    cin.ignore();
    vector<Transaction> mapTran;
    while(numberTrans--){
        string from, to;
        int amount;
        cin >> from >> to >> amount;
        cout << getName(from, mp) << " send " << amount << " bitcoin to " << getName(to, mp) << "\n";
    }
    return 0;
}