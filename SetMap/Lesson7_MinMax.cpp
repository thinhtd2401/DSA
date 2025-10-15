// Cho mảng A[] gồm n phần tử, có 4 loại thao tác

// Thao tác 1 : Thêm phần tử X vào mảng
// Thao tác 2 : Xóa mọi giá trị X khỏi mảng nếu X tồn tại trong mảng
// Thao tác 3 : Tìm phần tử nhỏ nhất trong mảng
// Thao tác 4 : Tìm phần tử lớn nhất trong mảng
// Đối với thao tác 3 và 4 bạn hãy in ra phần tử lớn nhất, nhỏ nhất trong mảng A[]

// Đầu vào
// Dòng 1 gồm N : Số lượng phần tử ban đầu trong mảng A[]
// Dòng thứ 2 gồm N phần tử ban đầu của mảng A[]
// Dòng 3 gồm số lượng thao tác Q
// Q dòng tiếp theo mỗi dòng mô tả 1 thao tác, trong đó nếu là thao tác 1 và 2 thì có thêm phần tử X.
// Giới hạn
// 1<=N<=10^5
// 1<=Q<=10000
// 0<=A[i], X<=10^6
// Đầu ra
// In ra kết quả của bài toán

// Ví dụ :
// Input 01
// Copy
// 12
// 7 61 6 82 62 26 42 35 84 7 44 76 
// 10
// 3
// 3
// 2 5
// 2 85
// 1 57
// 1 45
// 2 56
// 1 11
// 3
// 1 74
// Output 01
// Copy
// 6
// 6
// 6


#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<int> se;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        se.insert(x);
    }
    int q;
    cin >> q;
    while (q > 0){
        int code;
        cin >> code;
        if (code == 1){
            int value;
            cin >> value;
            se.insert(value);
        }else if (code == 2){
            int value;
            cin >> value;
            if (se.find(value) != se.end()){
                se.erase(value);
            }
        } else if (code == 3) {
            cout << *se.begin() << '\n';
        } else {
           cout << *se.rbegin() << '\n';
        }
        q--;
    }
    return 0;
}