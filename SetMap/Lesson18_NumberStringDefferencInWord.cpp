#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string word;
    set<string> mp;
    while(cin >> word){
        mp.insert(word);
    }
    cout << mp.size() << "\n";
    cout << *mp.begin() << " " << *mp.rbegin();
    
    return 0;
}