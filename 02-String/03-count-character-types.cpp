/*
Bài 3: Đếm loại ký tự

Đề bài:
- Nhập một dòng văn bản.
- Đếm số chữ hoa, chữ thường và chữ số.
- Không tính khoảng trắng vào các nhóm trên.

Ví dụ:
Input:  Hello 2026!
Output: upper = 1, lower = 4, digit = 4
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int upper=0;
    int lower=0;
    int digit=0;
    for (size_t i = 0; i < s.size(); i++) {
        if(isupper(s[i])){
            upper++;
        }
        if(islower(s[i])){
            lower++;
        }
        if(isdigit(s[i])){
            digit++;
        }
    }
    cout << "upper = "<<upper<<", lower = "<<lower<<", digit = "<<digit;

    return 0;
}
