
#include <bits/stdc++.h>

using namespace std;

double calAverageScore(vector<pair<int, int>> scores){
    double totalScores = 0;
    int totalCredit = 0;
    for (auto it : scores){
        totalScores += (double) it.first * it.second;
        totalCredit += it.first;
    }
    return totalScores / totalCredit;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string name;
    int credit, score;
    map<string, vector<pair<int,int>>> mp;
    while(cin >> name >> credit >> score){
        mp[name].push_back({credit, score});
    }

    for (auto it = mp.rbegin(); it != mp.rend(); it++){
        cout << (*it).first << " : " << fixed << setprecision(2) << calAverageScore((*it).second) << "\n";
    }
    return 0;
}