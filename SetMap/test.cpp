#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,i,j;
map<pair<ll,ll>,ll> m;
int main()
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    set<int> se;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }
    int q;
    cin >> q;
    while (q > 0)
    {
        int tt;
        cin >> tt;
        if (tt == 1)
        {
            int x;
            cin >> x;
            se.insert(x);
        }
        else if (tt == 2)
        {
            int x;
            cin >> x;
            if (se.count(x))
                se.erase(x);
        }
        else if (tt == 3)
        {
            cout << *se.begin() << '\n';
        }
        else
            cout << *se.rbegin() << '\n';
        q--;
    }
    return 0;
}
