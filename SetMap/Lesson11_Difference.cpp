#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    cin >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }

    set<int> se(b, b + m);
    set<int> ans;
    for (int i = 0; i < n; i ++){
        if (se.find(a[i]) == se.end()){
            ans.insert(a[i]);
            se.erase(a[i]);
        }
    }
    for (int it : ans){
        cout << it << " ";
    }
    return 0;
}