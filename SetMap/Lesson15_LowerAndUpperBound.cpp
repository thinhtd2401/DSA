#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    multiset<int> mse;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mse.insert(x);
    }
    int q;
    cin >> q;
    while(q--){
        int t, x;
        cin >> t >> x;
        if (t == 1){
            mse.insert(x);
        }else if (t == 2){
            auto it = mse.find(x);
            if (it != mse.end()){
                mse.erase(it);
            }
        }else if (t == 3){
            auto it = mse.lower_bound(x);
            if (it == mse.end()){
                cout << "-1\n";
            }else {
                cout << *it << "\n";
            }
        }else{
            if (x < *mse.begin()){
                cout << "-1\n";
            }else {
                auto it = mse.upper_bound(x);
                cout << *(--it) << "\n";
            }
        }
    }
    
    return 0;
}