#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    map<char , int> charCount;
    for (char c : s) {
        charCount[c]++;
    }
    
    auto min = charCount.begin();
    auto max = charCount.begin();
    for (auto it = charCount.begin(); it != charCount.end(); it ++) {
        if ((*it).second > (*max).second){
            max = it;
        }

        if ((*it).second <= (*min).second){
            min = it;
        }
    }

    cout << (*max).first << " " << (*max).second << "\n";
    cout << (*min).first << " " << (*min).second << "\n";
    cout << charCount.size(); 
 
    return 0;
}