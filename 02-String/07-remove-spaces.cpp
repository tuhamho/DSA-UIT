/*
Bài 7: Xóa khoảng trắng

Đề bài:
- Nhập một dòng văn bản.
- In ra chuỗi mới không chứa khoảng trắng.

Ví dụ:
Input:  I love C++
Output: IloveC++
*/

#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    string b;
    for(size_t i=0; i<s.size();i++){
        if(!isspace(s[i]) ){
            b+=s[i];
        }
    }
    cout << b;


    return 0;
}
