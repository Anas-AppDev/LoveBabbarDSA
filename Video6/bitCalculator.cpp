#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    while (n!=0){
        int bit = n&1;
        cout<<bit;
        n=n>>1;
    }

    return 0;
}