/*
Bài 5: Kiểm tra chuỗi palindrome

Đề bài:
- Nhập một chuỗi không có khoảng trắng.
- In YES nếu đọc xuôi và đọc ngược giống nhau.
- Ngược lại in NO.

Ví dụ:
Input:  madam
Output: YES
*/

#include <iostream>
#include <string>
using namespace std;
void reverse(string &s){
    if(s.empty()){
        return;
    }
    size_t left = 0;
    size_t right = s.size() - 1;
    for (size_t i = 0; i < s.size() / 2; i++) {
        char current = s[left];
        s[left] = s[right];
        s[right] = current;
        left++;
        right--;
    }
    
};
int main() {
    string s;
    cin>>s;
    string b = s;
    reverse(b);
    if(b==s){
        cout <<"YES";
    }
    else 
    cout <<"NO";

   
    return 0;
}
