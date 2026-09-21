#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int x;
    cin>>x;
    int a[]={9,6,3,2,5,1};
    int n= sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cout << i;
            break;
        }
    }
    return 0;
}