
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<char> se;
    char x;
    while(n--){
        cin >> x;
        if(!isdigit(x)){
            se.insert(tolower(x));
        }
    }
    cout << se.size() << "\n";
    for (auto it : se){
        cout << it <<" ";
    }

    return 0;
}