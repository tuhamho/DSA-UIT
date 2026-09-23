/*
Bài 5: Tìm kiếm tuyến tính

Đề bài:
- Nhập n, mảng n số nguyên và giá trị x.
- In vị trí xuất hiện đầu tiên của x.
- Nếu không tìm thấy, in -1.
- Vị trí được đánh số từ 0.

Ví dụ:
Input:  5\n4 8 2 8 1\n8
Output: 1
*/

#include <iostream>
using namespace std;

int main() {
    int a[1000];
    int n;
    int x;
    cin >> n;
    for ( int i=0; i< n; i++){
        cin >> a[i];
    }
    cin >> x;
    int c= 0;
    for ( int i =0 ;i<n;i++){
        if ( a[i]==x){
            cout << i;
            c++;
            break;
        }
    }
    if (c==0)
    cout << -1;


    return 0;
}
