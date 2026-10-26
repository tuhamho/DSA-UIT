/*
Bài 4: Tìm vị trí chèn

Đề bài:
- Nhập n (1 <= n <= 1000000) và một mảng số nguyên tăng dần, không có phần tử trùng.
- Nhập tiếp giá trị x.
- In vị trí đầu tiên có giá trị >= x.
- Nếu mọi phần tử đều nhỏ hơn x, in n.
- Chỉ số mảng bắt đầu từ 0.

Ví dụ:
Input:
5
1 3 5 6 9
4
Output:
2

Giải thích: nếu chèn 4 vào vị trí 2, mảng vẫn giữ thứ tự tăng dần.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i];
    }
    int left = 0 ;
    int right = n-1;
    int mid = left + (right-left)/2;
    int x; cin >> x;
    int index = 0;
    bool check = false;
    while(left <=right){
        if(a[mid]>=x){
            index = mid;
            check = true;
            right = mid -1 ;
            mid = left + ( right - left)/2;

        }
        else if(a[mid] < x){
            index = mid + 1;
            left = mid +1;
            mid = left + ( right - left)/2;
        }
    }
     cout << index;
    return 0;
}
