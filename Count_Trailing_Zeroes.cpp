#include<iostream>
using namespace std;

int countTrailingZeroes(int n){
    int res=0;
    int i;
    for(i=5;i<=n;i=i*5){
        res=res+n/i;
    }
return res;    
}

int main(){
    int n;
    cin>>n;
    cout<<countTrailingZeroes(n)<<endl;
    return 0;
}
