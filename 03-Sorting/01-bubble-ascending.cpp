/*
Bài 1: Bubble Sort tăng dần

Đề bài:
- Nhập n (1 <= n <= 1000) và n số nguyên.
- Sắp xếp mảng tăng dần bằng Bubble Sort.
- In các phần tử, cách nhau bởi dấu cách.

Ví dụ:
Input:
5
5 2 4 1 3
2 5 4 1 3 
Output:
1 2 3 4 5s
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];
    for ( int i = 0 ; i< n; i ++){
        cin >> a[i];
    }
   
    for(int j = 1; j <n;j++){
        for ( int i = 0 ; i < n-1; i++){
            if ( a[i] > a[i+1]){
                int current = a[i];
                a[i] = a[i+1];
                a[i+1]= current;
                
            }
            
            //2 4 1 3 5
            //

        }
    }
    for (int i =0 ; i<n; i++){
        cout << a[i]<< " ";
    }
    return 0;
}
