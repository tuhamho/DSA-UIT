/*
Bài 7: Merge Sort tăng dần

Đề bài:
- Nhập n (1 <= n <= 100000), sau đó nhập n số nguyên.
- Tự cài đặt Merge Sort để sắp xếp mảng tăng dần.
- Không dùng hàm sắp xếp có sẵn.
- In mảng sau khi sắp xếp, các số cách nhau bởi dấu cách.

Gợi ý:
- Chia mảng thành hai nửa cho đến khi mỗi đoạn còn tối đa một phần tử.
- Trộn hai đoạn đã có thứ tự thành một đoạn tăng dần.

Ví dụ:
Input:
6
8 3 -1 7 3 2
Output:
-1 2 3 3 7 8
*/

#include <iostream>
using namespace std;

const int MAX_N = 100000;
int a[MAX_N];
int temp[MAX_N];

void merge( int left , int mid , int right ){
    int i = left;
    int j = mid +1 ;
    int k = left;
    while(i <= mid && j <= right){
        if( a[i] <= a[j]){
            temp[k]=a[i];
        i++;
        }
        else{
        temp[k]=a[j];
        j++;}
    k++;
    }
    while(i<=mid){
        temp[k]= a[i];
        i++;
        k++;
    }
    while(j<=right){
        temp[k]= a[j];
        j++;
        k++;
    }
    for(int index = left; index <=right;index++){
        a[index]= temp[index];
    }
}
void mergesort(int left, int right){
    if(left >= right){
        return;
    }
    int mid = (right + left) /2;
    mergesort(left,mid);
    mergesort(mid +1, right);
    merge(left,mid,right);
}

int main() {
    int n; cin >> n;
    for ( int  i = 0  ; i <  n ; i ++){
        cin >> a[i];
    }
    mergesort(0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << a[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    return 0;
}
