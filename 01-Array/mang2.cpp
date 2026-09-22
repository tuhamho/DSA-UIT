#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n ;
    cin >> n;
    int a[1000];
    for (int i=0 ; i<n; i++){
        cin >> a[i];
    }
    int b = n-1;
    while (b>=0){
        cout << a[b];
        b--;
    }   
    return 0;
}