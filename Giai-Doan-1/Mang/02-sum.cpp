/*
Bài 2: Tính tổng phần tử

Đề bài:
- Nhập n và mảng n số nguyên.
- Tính và in tổng tất cả phần tử.
- Dữ liệu có thể chứa số âm.

Ví dụ:
Input:  4\n-2 5 1 -4
Output: 0
*/

#include <iostream>
using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    for ( int i = 0 ; i <n;i++){
        cin >> a[i];
    }
    int b = 0;
    int c = 0;
    while (b <n){
        c+= a[b];
        b++;
    }
    cout << c;
    return 0;
}
