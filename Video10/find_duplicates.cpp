#include<iostream>
using namespace std;

int main(){

    int arr[6] = {5,1,2,3,4,2};

    int ans=0; 
    for (int i=0; i<6; i++){
        ans = ans ^ arr[i];
    }

    cout<<ans<<endl;
    
    int ans2=0;
    for (int i=1; i<6; i++){
        ans2 = ans2^i;
    }
    cout<<ans2<<endl;

    cout<< (ans^ans2);

    return 0;

}