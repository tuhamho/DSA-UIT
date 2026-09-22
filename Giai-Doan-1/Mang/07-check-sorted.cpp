/*
Bài 7: Kiểm tra mảng tăng dần

Đề bài:
- Nhập n và mảng n số nguyên.
- Kiểm tra mảng có không giảm hay không (a[i] <= a[i+1]).
- In YES nếu đúng, ngược lại in NO.

Ví dụ:
Input:  5\n1 2 2 4 9
Output: YES
*/

#include <iostream>
using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    for (int i=0; i<n;i++){
        cin >> a[i];
    }
    bool check = true;
    for ( int i = 0 ; i < n-1; i++){
        if(a[i] > a[i+1]){
        check = false;
        break;}
    }
    if(check)
    cout<<"YES";
    else
    cout<<"NO";
}
