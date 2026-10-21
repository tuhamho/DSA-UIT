/*
Bài 1: Tìm kiếm nhị phân cơ bản

Đề bài:
- Nhập n (1 <= n <= 1000000) và một mảng gồm n số nguyên tăng dần.
- Nhập tiếp giá trị x cần tìm.
- In chỉ số đầu tiên tìm thấy x; nếu không có, in -1.
- Chỉ số mảng bắt đầu từ 0.

Ví dụ:
Input:
6
1 3 5 7 9 11
7
Output:
3
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0 ; i<n ; i++){
        cin >> a[i];
    }
    int x; cin >> x;
    int left = 0;
    int right = n-1;
    int mid = left + (right - left)/2;
    bool check = true;
    for(int i = left ; i<=right ;){
        if(left > right){
            break;
        }
        else if(a[mid]==x){
            cout <<mid;
            check = false;
            break;
        }
        else if(a[mid] < x){
            left = mid +1;
            mid = left + (right - left)/2;
        }
        else if(a[mid]>x){
            right = mid -1;
            mid = left + (right - left)/2;
        }
    }
    if( check){
        cout << -1;
    }
    return 0;
}
