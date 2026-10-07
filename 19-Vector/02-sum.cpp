/*
Bài 2: Tính tổng phần tử trong vector

Đề bài:
- Nhập số nguyên n (1 <= n <= 1000), sau đó nhập n số nguyên.
- Lưu các số vào vector và tính tổng các phần tử.
- In tổng ra màn hình.

Ví dụ:
Input:
5
3 -2 4 1 6
Output:
12
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int n ; cin >> n;
    for(int i = 0 ; i < n; i ++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    long long s=0;
    for(int i = 0 ; i < n ; i ++){
        s+=a[i];
    }
    cout << s;
    return 0;
}
