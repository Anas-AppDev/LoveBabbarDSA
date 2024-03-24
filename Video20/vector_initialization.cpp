#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr(5,10);

    for (int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    vector<int> arr2 = {1,5,6,8,0};
    for (int i:arr2){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    // vector<int> arr3(arr);
    // for (int i:arr3){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<endl;


    return 0;
}