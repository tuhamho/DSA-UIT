/*
Bài 4: Chèn phần tử vào vector

Đề bài:
- Nhập n (1 <= n <= 1000), sau đó nhập n số nguyên.
- Nhập vị trí p (0 <= p <= n) và số nguyên x.
- Chèn x vào vị trí p (đánh số vị trí từ 0).
- In vector sau khi chèn.

Ví dụ:
Input:
4
10 20 30 40
2 99
Output:
10 20 99 30 40
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n ;
    vector<int> a;
    for( size_t i = 0 ; i < n ; i ++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    size_t p;int x; cin >> p>> x;
    a.insert(a.begin()+ p, x);
    for(size_t i = 0 ; i < a.size(); i ++){
        cout << a[i];
        if(i < a.size()-1) cout << " ";
    }



    return 0;
}
