    #include <iostream>
    #include <iomanip>
    #include <string>
    #include <unordered_map>
    using namespace std;

    int main() {
        int a[]= {1,2,3,4,5};
        int target = 5;
        int n = sizeof(a)/sizeof(a[0]);
        
        unordered_map<int ,int > sotay;
        for ( int i = 0; i < n ; i++){
            int b = target - a[i];
            if(sotay.find(b)!=sotay.end()){
                cout <<"["<< sotay[b]<<","<<i<<"]" ;
                break;
            }
            sotay[a[i]]= i;
        }
        return 0;
    }