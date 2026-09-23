/*
Bài 2: Đếm nguyên âm

Đề bài:
- Nhập một dòng văn bản.
- Đếm số nguyên âm a, e, i, o, u.
- Không phân biệt chữ hoa và chữ thường.

Ví dụ:
Input:  Hello World
Output: 3
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int count = 0;
    for (size_t i = 0; i < s.size(); i++) {
        if(s[i]=='a' || s[i]=='A' || s[i]=='e'|| s[i]=='E' || s[i]=='i'||s[i]=='I' || s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
            count++;
        }
        
    }
    cout << count;
    return 0;
}
