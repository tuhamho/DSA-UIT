/*
Bài 3: Tìm phần tử nhỏ nhất và lớn nhất

Đề bài:
- Nhập n và mảng n số nguyên.
- In ra giá trị nhỏ nhất và lớn nhất.
- Hãy xử lý đúng trường hợp tất cả phần tử đều âm.

Ví dụ:
Input:  5\n-8 -2 -10 4 1
Output: min = -10, max = 4
*/

#include <iostream>
using namespace std;


int main() {
    int a[1000];
    int n ;
     cin >> n;
    for ( int i = 0; i<n;i++ ){
        cin >> a[i];
    }
    int max = a[0];
    int min = a[0];
    for (int i = 0; i<n; i++){
        if (a[i]> max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    cout << "min = " << min<<", max = "<<max;
    return 0;
}
