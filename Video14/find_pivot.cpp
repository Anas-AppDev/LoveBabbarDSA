#include<iostream>
using namespace std;

int binsearch(int arr[], int size){
    int s=0;
    int e=size-1;
    
    while (s<e)
    {
        int mid = s+((e-s)/2);

        if (arr[mid]>=arr[0]){
            s = mid+1;
        }
        else{
            e=mid;
        }
    }

    return s;
    
}


int main(){

    int arr[8] = {10,12,2,4,6,9};

    int index = binsearch(arr, 8);

    cout<<index;

    return 0;
}