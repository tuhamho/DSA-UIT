/*
Bài 6: Đếm số từ

Đề bài:
- Nhập một dòng văn bản có thể có nhiều khoảng trắng.
- Đếm số từ trong câu.
- Các từ được ngăn cách bởi một hoặc nhiều khoảng trắng.

Ví dụ:
Input:  I love learning C++
Output: 4
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int count=0;
    bool inword = false;
    for ( size_t i =0 ; i < s.size(); i++){
        if(s[i]==' '){
            inword = false;
        }
        if(inword){
            continue;

        }
        
        if(s[i]!= ' ' &&  inword == false){
            count++;
            inword = true;
        }
        
        
    }
    cout << count ;
    return 0;
}
