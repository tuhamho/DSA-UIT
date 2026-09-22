/*
Bài 4: Đếm phần tử theo điều kiện

Đề bài:
- Nhập n và mảng n số nguyên.
- Đếm có bao nhiêu số chẵn và bao nhiêu số lẻ.
- In hai kết quả.

Ví dụ:
Input:  6\n1 2 4 7 9 10
Output: even = 3, odd = 3
*/

#include <iostream>
using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    for ( int i=0; i<n; i++){
        cin >> a[i];
    }
    int even= 0;
    int odd = 0;
    for ( int i=0; i<n;i++){
        if(a[i]%2==0){
            even++;
        }
        else
        odd++;
    }
    cout << "even = "<<even<<", odd = "<<odd;
    return 0;
}
