/*
Bài 9: Xóa mọi phần tử có giá trị x

Đề bài:
- Nhập n (1 <= n <= 1000), sau đó nhập n số nguyên vào vector.
- Nhập số nguyên x.
- Xóa tất cả phần tử có giá trị bằng x.
- In kích thước mới, sau đó in các phần tử còn lại.
- Nếu không còn phần tử nào, chỉ in kích thước 0.

Ví dụ:
Input:
7
2 5 2 1 2 8 5
2
Output:
4
5 1 8 5
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    size_t n ; cin >> n;
    vector<int> a;
    for(size_t i = 0 ; i< n ;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int x;
    cin >> x;
    vector<int> b;
    for(size_t i=0; i < a.size();i++){
        if(a[i]!=x){
            b.push_back(a[i]);
        }
    }

   cout << b.size()<<endl;
   if(b.size()!=0){
    for(size_t i=0; i < b.size();i++){
        cout << b[i];
        if(i < b.size()-1) cout << " ";}
    }

    return 0;
}
