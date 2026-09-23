/*
Bài 8: Tìm phần tử lớn thứ hai

Đề bài:
- Nhập n và mảng n số nguyên.
- Tìm giá trị lớn thứ hai phân biệt.
- Nếu không tồn tại, in NONE.
- Không được sắp xếp mảng.

Ví dụ:
Input:  6\n4 9 2 9 7 1
Output: 7
*/

#include <iostream>
using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    for ( int i=0;i <n;i++){
        cin >> a[i];
    }

    int max = a[0];
    int max1;
    bool check = false;
    
    for ( int i =1 ; i < n; i++){
        if ( max < a[i]){
        max1 = max;
        max = a[i];
        check = true;
        }
        else if(max > a[i] && (!check||max1<a[i])){
            max1 = a[i];
            check = true;
        }
    }
    if ( !check)
    cout << "NONE";
    else 
    cout <<max1;
    

    return 0;
}
