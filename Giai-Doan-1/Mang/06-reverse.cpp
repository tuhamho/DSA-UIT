/*
Bài 6: Đảo ngược mảng

Đề bài:
- Nhập n và mảng n số nguyên.
- Đảo ngược thứ tự các phần tử.
- In mảng sau khi đảo.
- Thử giải bằng hai con trỏ ở hai đầu mảng.

Ví dụ:
Input:  4\n1 2 3 4
Output: 4 3 2 1
*/

#include <iostream>
using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
    int left = 0;
    int right = n -1;
    for(int i=0;i <n/2; i++){
        int current = a[left];
        if ( left  < right){
            a[left] = a[right];
            a[right] = current;
            left++;
            right--;
        }
    }
    for(int i=0; i<n; i++){
        if (i > 0) {
            cout << " ";
        }
        cout << a[i];
    }
    return 0;
}
