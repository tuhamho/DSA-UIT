/*
Bài 3: Selection Sort tăng dần

Đề bài:
- Nhập n (1 <= n <= 1000) và n số nguyên.
- Tự cài đặt Selection Sort để sắp xếp tăng dần.
- Không dùng sort() có sẵn.
- In mảng sau khi sắp xếp.

Ví dụ:
Input:
4
8 -1 3 3
Output:
-1 3 3 8
*/

#include <iostream>
using namespace std;

int main() {
    int a[1000], n;
    cin>> n;
    for(int i=0;i <n; i++){
        cin >> a[i];
    }
    for (int i = 0 ; i<n-1 ; i++){
        int minindex = i ;
        for ( int j = i +1 ; j<n; j++){
        if( a[minindex] > a[j]){
            minindex = j;
        }
    }
        int current = a[i];
        a[i] = a[minindex];
        a[minindex] = current;
}
    for ( int i = 0  ; i < n ; i++){
        cout << a[i];
        if(i < n-1) cout << " ";
    }
    return 0;
}
