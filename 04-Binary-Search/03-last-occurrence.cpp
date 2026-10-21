/*
Bài 3: Tìm vị trí xuất hiện cuối cùng

Đề bài:
- Nhập n (1 <= n <= 1000000) và một mảng số nguyên không giảm.
- Nhập tiếp giá trị x.
- In chỉ số xuất hiện cuối cùng của x; nếu x không có trong mảng, in -1.
- Chỉ số mảng bắt đầu từ 0.

Ví dụ:
Input:
7
1 2 2 2 4 5 5
2
Output:
3
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
   int n ; cin >> n;
   vector<int > a(n);
   for(int i = 0 ; i < n ; i++){
        cin >> a[i];
   }
   int x; cin >> x;
   int left = 0;
   int right = n-1;
   int mid = left + (right -left )/2;
   bool check = false;
   int index = 0;
   for(int i = left ; i<= right ; ){
    if(left > right){
        break;
    }
    else if(a[mid]==x){
        index = mid;
        check = true;
        left = mid +1;
        mid = left + (right - left )/2 ;
    }
    else if(a[mid] > x){
        right = mid -1;
        mid = left + (right - left )/2 ;

    }
    else if( a[mid ]< x){
        left = mid +1;
        mid = left + (right - left )/2 ;
    }

   }
   if( check) cout << index;
   else cout << -1;
    return 0;
}
