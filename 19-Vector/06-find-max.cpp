/*
Bài 6: Tìm phần tử lớn nhất trong vector

Đề bài:
- Nhập n (1 <= n <= 1000), sau đó nhập n số nguyên vào vector.
- Tìm và in giá trị lớn nhất.

Ví dụ:
Input:
5
-4 7 2 7 1
Output:
7
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    size_t n; cin >> n;
    vector<int> a;
    for( size_t i = 0 ; i < n; i ++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int max = a[0];
    for(size_t i =1; i <n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    cout << max;
    return 0;
}
