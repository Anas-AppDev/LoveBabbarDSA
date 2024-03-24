#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int ans = 0;
    int i = 0;
    while (n!=0){
        int bit = n&1;
        ans = ans + (bit*pow(10,i));

        i++;
        n=n>>1;
    }

    cout<<"Binary  = "<<ans;

    return 0;
}