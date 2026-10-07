/*
Bài 5: Xóa phần tử khỏi vector

Đề bài:
- Nhập n (1 <= n <= 1000), sau đó nhập n số nguyên.
- Nhập vị trí p (0 <= p < n), đánh số vị trí từ 0.
- Xóa phần tử ở vị trí p.
- In kích thước mới và vector sau khi xóa.

Ví dụ:
Input:
5
4 8 2 9 7
2
Output:
4
4 8 9 7
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n ; cin >> n;
    vector<int> a;
    for( size_t i = 0 ; i< n ;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    size_t p; cin >> p ;
    a.erase(a.begin()+ p);
    cout << a.size()<<endl;
    for ( size_t i = 0 ; i < a.size();i++){
        cout << a[i];
        if(i < a.size()-1) cout <<" ";
    }
    return 0;
}
