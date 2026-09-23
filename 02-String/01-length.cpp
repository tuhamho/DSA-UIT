/*
Bài 1: Đếm độ dài chuỗi

Đề bài:
- Nhập một chuỗi không có khoảng trắng.
- In ra số ký tự của chuỗi.

Ví dụ:
Input:  hello
Output: 5
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s.size();
    return 0;
}
