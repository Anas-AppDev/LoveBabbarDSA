#include<iostream>
using namespace std;

int uniqElem(int arr[], int size){

    int ans = 0;
    for (int i=0; i<size; i++){
        ans = arr[i]^ans;
    }

    return ans;
}

int main(){

    int arr[9] = {7,8,4,5,8,5,4,7,1};
    cout<< uniqElem(arr, 9); 

    return 0;
}