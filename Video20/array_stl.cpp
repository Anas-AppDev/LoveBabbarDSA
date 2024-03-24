#include<iostream>
#include<array>
using namespace std;

int main(){

    array<int,5> arr = {2,4,6,7,10};

    int size = arr.size();

    for (int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"element at 2 index = "<<arr.at(2)<<endl;
    cout<<"front = "<<arr.front()<<endl;
    cout<<"back = "<<arr.back()<<endl;
    cout<<"isEmpty = "<<arr.empty()<<endl;

    return 0;
}