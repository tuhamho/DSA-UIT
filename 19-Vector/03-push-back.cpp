/*
Bài 3: Thêm phần tử vào cuối vector

Đề bài:
- Nhập n (0 <= n <= 1000), sau đó nhập n số nguyên ban đầu.
- Nhập thêm số nguyên x.
- Dùng thao tác thêm phần tử vào cuối vector để thêm x.
- In kích thước mới và toàn bộ vector.

Ví dụ:
Input:
3
10 20 30
40
Output:
4
10 20 30 40
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int n ;
    cin >> n;
    for(int i= 0 ; i< n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int x;
    cin >> x;
    a.push_back(x);
    cout <<a.size()<<endl;
    for(int i =0; i<a.size() ; i++){
        cout << a[i];
        if( i < a.size()-1)  cout <<" ";
    }
    return 0;
}
