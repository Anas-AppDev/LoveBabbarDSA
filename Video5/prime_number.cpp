#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    

    int flag = 1;

    for(int i=2; i<=(n/2); i++){
        if (n%i == 0){
            cout<<"Not Prime"<<i;
            flag = 0;
            break;
        }
    }

    if (flag){
        cout<<"Prime Number";
    }
}