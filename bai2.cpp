    #include <iostream>
    #include <iomanip>
    #include <string>
    #include <unordered_map>
    using namespace std;

    int main() {
        int a[]= {1,2,3,4,5};
        int target = 5;
        int n = sizeof(a)/sizeof(a[0]);
        int max = 0;
        int pos = 0;
        unordered_map<int ,int > sotay;
        for ( int i = 0 ; i < n ; i ++) {
            
            if ( a[i] > max ){
                max = a[i];
                pos = i;
            }
            a[]
        }
        ;
        return 0;
    }