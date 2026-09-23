/*
Bài 4: Đảo ngược chuỗi

Đề bài:
- Nhập một chuỗi không có khoảng trắng.
- In chuỗi theo thứ tự ngược lại.

Ví dụ:
Input:  hello
Output: olleh
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    size_t left = 0;
    size_t right = s.size() - 1;
    for (size_t i = 0; i < s.size() / 2; i++) {
        char current = s[left];
        s[left] = s[right];
        s[right] = current;
        left++;
        right--;
    }
    cout <<s;
    return 0;
}
