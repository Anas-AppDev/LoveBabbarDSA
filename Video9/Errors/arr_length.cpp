#include<iostream>
using namespace std;

int main(){
    int arr[10] = {2,4,8};

    int length = sizeof(arr)/sizeof(int);

    cout<<"Size should be 10"<<endl;
    cout<<"Length should be 3"<<endl;

    cout<<"But result is : ";
    cout<<"Length = "<<length;

    return 0;
}