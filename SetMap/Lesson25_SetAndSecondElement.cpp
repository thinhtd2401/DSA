
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    set<int> se;
    for (int i = 0; i < n; i++){
        se.insert(a[i]);
    }

    auto min = se.begin();
    auto max = se.rbegin();
    

    cout << se.size() << "\n";
    cout << *max << " " << *min << "\n";
    cout << *(++max) << " " << *(++min);

    return 0;
}