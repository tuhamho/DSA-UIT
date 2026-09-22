#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int a[1000];
    int n;
    cin >> n;
    int max;
    for ( int  i= 0; i<n;i++){
        cin >> a[i];
    }
    max = a[0];
    for (int i = 0; i<n;i++){
        if ( a[i]> max){
            max = a[i];
        }
    }
    cout << max;
    return 0;
}
