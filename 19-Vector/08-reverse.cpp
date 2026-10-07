/*
Bài 8: Đảo ngược vector

Đề bài:
- Nhập n (1 <= n <= 1000), sau đó nhập n số nguyên vào vector.
- Đảo thứ tự các phần tử rồi in vector.
- Hãy tự đổi chỗ các phần tử, không dùng hàm đảo có sẵn.

Ví dụ:
Input:
5
3 8 -1 4 6
Output:
6 4 -1 8 3
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    size_t n; cin >> n;
    vector<int> a;
    for(size_t i = 0 ; i<n ; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int left = 0;
    int right = n-1;
    for(size_t i = 0; i<n/2;i++){
        int current = a[i];
        a[left] = a[right];
        a[right] = current;
        left++;
        right--;
    }
    for(size_t i = 0; i < a.size();i++){
        cout << a[i]<< " ";
    }

    return 0;
}
