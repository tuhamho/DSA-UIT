/*
Bài 9: Xóa phần tử tại vị trí

Đề bài:
- Nhập n, mảng n số nguyên và vị trí k (0 <= k < n).
- Xóa phần tử tại vị trí k bằng cách dịch các phần tử phía sau sang trái.
- In mảng còn lại và kích thước mới.

Ví dụ:
Input:  5\n10 20 30 40 50\n2
Output: 10 20 40 50
*/

#include <iostream>
using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    for( int i =0; i< n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    for (int i= k;i<n-1;i++){
        a[i]= a[i+1];
    }
    for( int i =0; i< n-1; i++){
        cout<< a[i];
        if(i< n-2)
        cout <<" ";
    }
    return 0;
}
