#include<iostream>
using namespace std;

int main(){

    int arr[5] = {20,30,10,40,60};
    int n = 5;

    for (int i=0; i<n-1; i++){

        bool swapped = false;
        
        for (int j=0; j<n-(i+1); j++){

            if (arr[j]>arr[j+1]){
                // int temp = arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (swapped == false){
                break;
        }
    }

    for (int i=0; i<n; i++){
        cout<<arr[i]<<' ';
    }

    return 0;
}