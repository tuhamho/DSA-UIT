/*
Bài 4: Insertion Sort tăng dần

Đề bài:
- Nhập n (1 <= n <= 1000) và n số nguyên.
- Tự cài đặt Insertion Sort để sắp xếp tăng dần.
- Không dùng sort() có sẵn.
- In mảng sau khi sắp xếp.

Ví dụ:
Input:
5
7 4 5 2 9
Output:
2 4 5 7 9
*/

#include <iostream>
using namespace std;

int main() {
    int a[1000],n; cin >> n;
    for ( int i = 0 ; i < n; i ++){
        cin >> a[i];
    }
   for(int i = 1 ; i <  n; i++){
    int current = a[i];
    int j;
    for(j= i-1; j >=0 && a[j]>current; j--){
        a[j+1] = a[j];

    }
    a[j+1] = current;
   }
    for(int i = 0 ; i < n ; i++){
        cout << a[i];
        if( i < n-1) cout << " ";
    }


    return 0;
}
