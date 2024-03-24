#include<iostream>
using namespace std;

int main(){

    int arr[9] = {29,72,98,13,87,66,52,51,36};

    for (int i=0; i<9-1; i++){
        int min =  i;

        for (int j = i+1 ; j<9; j++){
            if (arr[j]<arr[min]){
                int temp = arr[min];
                arr[min]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for (int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}