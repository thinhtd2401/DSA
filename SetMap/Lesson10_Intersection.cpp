#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    cin >> m;
    unordered_set<int> printed;
    vector<int> A;
    unordered_set<int> B;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        A.push_back(x);
    }

    for (int j = 0; j < m; j++){
        int y;
        cin >> y;
        B.insert(y);
    }

    for(int it : A){
        if (B.find(it) != B.end() && printed.find(it) != printed.end()){
            cout << it << ' ';
            printed.insert(it);
        }
    }
    return 0;
}