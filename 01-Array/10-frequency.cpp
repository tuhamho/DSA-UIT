/*
Bài 10: Đếm tần suất phần tử

Đề bài:
- Nhập n và mảng n số nguyên.
- Với mỗi giá trị khác nhau, in giá trị và số lần xuất hiện.
- Mỗi giá trị chỉ được in một lần.
- Có thể dùng unordered_map hoặc tự đánh dấu phần tử đã xử lý.

Ví dụ:
Input:  5\n2 3 2 4 3
Output: 2:2 3:2 4:1
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    for( int i=0;i<n;i++){
        cin >> a[i];
    }
    // unordered_map<int , int> sotay;
    // for(int i=0; i<n;i++){
    //     if(sotay.find(a[i])!=sotay.end()){
    //         cout << "so bi lap "<< a[i]<<endl;
    //     }
    //     sotay[a[i]]=i;
    // }
    for( int i = 0 ; i<n ; i++){
        bool check = false;
        for (int j = 0 ; j <i; j++){
            if( a[j]==a[i]){
                check = true;
                break;
            }
        }
            if(check){
                continue;
            }
            int count = 0;
        for(int j = i ; j< n; j++){
                if( a[j] == a[i]){
                    count++;
                }
            }
            cout << a[i] << ":"<<count;
            if(i<n-1){
                cout << " ";
            }
        
    }
    return 0;
}
