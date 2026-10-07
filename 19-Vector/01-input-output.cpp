/*
Bài 1: Nhập và in vector

Đề bài:
- Nhập số nguyên n (1 <= n <= 1000), sau đó nhập n số nguyên.
- Lưu các số vào một vector và in chúng trên một dòng, cách nhau bởi dấu cách.

Ví dụ:
Input:
4
7 2 9 1
Output:
7 2 9 1
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int n; cin>>n;
    for(int i=0; i < n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i= 0; i < n ; i ++){
        cout << a[i];
        if(i < n-1) cout << " ";
    }
    return 0;
}
