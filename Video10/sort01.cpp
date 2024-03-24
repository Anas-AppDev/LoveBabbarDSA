#include<iostream>
using namespace std;

void printArray(int arr[], int len){
    for (int k=0; k<len; k++){
        cout<<arr[k]<<" ";
    }

}

int main(){

    
    int arr[8] = {0,0,0,0,1,1,1,0};
    int i=0, j=7;

    while (i<j){
        if (arr[i]==0){
            i++;
            cout<<"only i"<<endl;
        }
        if (arr[j]==1){
            j--;

            cout<<"only j"<<endl;
        }
        if (arr[i]==1 && arr[j]==0 && i<=j){
            arr[i]=0;
            arr[j]=1;
            i++;
            j--;

            cout<<"both cond match"<<endl;
        }
        cout<<i<<"    "<<j<<endl;
        printArray(arr, 7);
        cout<<endl;

    }

    printArray(arr, 7);
    
    return 0;
}