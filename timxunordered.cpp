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
            if(sotay.find(target)!=sotay.end()){
                cout <<"["<< sotay[target]<<","<<"]" ;
            }
        return 0;
    }