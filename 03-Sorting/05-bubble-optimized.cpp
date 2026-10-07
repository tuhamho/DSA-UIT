/*
Bài 5: Bubble Sort có dừng sớm

Đề bài:
- Nhập n và n số nguyên.
- Cài Bubble Sort tăng dần.
- Nếu trong một lượt không có lần đổi chỗ nào, hãy dừng thuật toán sớm.
- In mảng sau khi sắp xếp.

Ví dụ:
Input:
5
1 2 3 4 5
Output:
1 2 3 4 5

Gợi ý: Dùng một biến bool để ghi nhận lượt hiện tại có đổi chỗ hay không.
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
        int count =0;
        for ( int i = 0 ; i < n-1; i++){

            if ( a[i] > a[i+1]){
                int current = a[i];
                a[i] = a[i+1];
                a[i+1]= current;
                count++;

        }

        }
        if (count ==0) break;
    }
    for(int i = 0; i< n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
