/*
Bài 1: Nhập và xuất mảng

Đề bài:
- Nhập số nguyên n (0 < n <= 1000).
- Nhập n phần tử nguyên vào mảng.
- In các phần tử theo đúng thứ tự, cách nhau bởi dấu cách.

Ví dụ:
Input:  5\n1 2 3 4 5
Output: 1 2 3 4 5
*/

#include <iostream>
using namespace std;

int main() {
    int a[1000];
    int n;
    cin >>n;
    for ( int i = 0 ; i <n;i++){
        cin >> a[i];
    }
    for ( int i = 0; i<n;i++){
        if (i > 0) {
            cout << " ";
        }
        cout << a[i];
    }
    return 0;
}
