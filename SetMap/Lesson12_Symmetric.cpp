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

    set<int> seB(b, b + m);
    set<int> seA(a, a + n);
    set<int> ans;
    for (int it : seA){
        if (seB.find(it) == seB.end()){
            ans.insert(it);
        }
    }

    for (int it : seB){
        if (seA.find(it) == seA.end()){
            ans.insert(it);
        }
    }

    for (int it : ans){
        cout << it << " ";
    }
    return 0;
}