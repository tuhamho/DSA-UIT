/*
Bài 8: Tìm ký tự xuất hiện nhiều nhất

Đề bài:
- Nhập một chuỗi.
- Tìm ký tự xuất hiện nhiều lần nhất.
- Nếu có nhiều ký tự cùng số lần, chọn ký tự xuất hiện trước.
- Có thể bỏ qua khoảng trắng.

Ví dụ:
Input:  banana
Output: a
*/

#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    unordered_map<char , int> st;
    for(size_t i=0; i<s.size();i++){
        if(st.find(s[i])== st.end()){
        st[s[i]] =1;
            }
        else
            st[s[i]]++;}
        int max=0;
        char b;
        bool check = false;
        for(size_t i=0; i<s.size();i++){
            if(st[s[i]]>max && !isspace(s[i])){
                max =st[s[i]];
                b=s[i];
                check = true;
            }
        }
        if(check){
            cout << b;
        }

    return 0;
}
