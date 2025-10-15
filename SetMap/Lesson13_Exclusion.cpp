#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    set<int> seB(b, b + m);
    set<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (seB.find(a[i]) == seB.end())
        {
            ans.insert(a[i]);
        }
    }

    for (int it : ans)
    {
        cout << it << " ";
    }

    return 0;
}