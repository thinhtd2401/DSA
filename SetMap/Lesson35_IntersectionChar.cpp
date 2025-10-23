
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin >> n >> m;
    char a[n];
    set<char> se;
    for (int i = 0; i < n; i++) cin >> a[i];
    char x;
    while(m--){
        cin >> x;
        se.insert(x);

    }
    for (int i = 0; i < n; i++){
        if (se.find(a[i]) != se.end()){
            cout << a[i] << " ";
            se.erase(a[i]);
        }
    }
    return 0;
}