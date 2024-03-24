#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr;

    cout<<"size initially = "<<arr.size()<<endl;
    cout<<"capacity initially = "<<arr.capacity()<<endl;
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(15);

    cout<<"size finally = "<<arr.size()<<endl;
    cout<<"capacity finally = "<<arr.capacity()<<endl;


    cout<<"traversing vector using forEach loop"<<endl;
    for (int i: arr){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<"traversing vector using for loop"<<endl;
    for (int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<endl;

    cout<<"front = "<<arr.front()<<endl;
    cout<<"back = "<<arr.back()<<endl;
    cout<<"isEmpty = "<<arr.empty()<<endl;

    return 0;
}
