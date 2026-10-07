/*
Bài 7: Đếm số lần xuất hiện

Đề bài:
- Nhập n (1 <= n <= 1000), sau đó nhập n số nguyên vào vector.
- Nhập số nguyên x.
- Đếm và in số lần x xuất hiện trong vector.

Ví dụ:
Input:
6
2 5 2 1 2 8
2
Output:
3
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    size_t n; cin >> n;
    vector<int> a;
    for( size_t i =0 ; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int x;
    cin >> x;
    int count = 0;
    for(size_t i =0;i< n; i ++){
        if ( a[i]== x){
            count++;
        }
    }
    cout << count;


    return 0;
}
