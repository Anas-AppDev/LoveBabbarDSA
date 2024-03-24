#include<iostream>
using namespace std;

int binsearch(int arr[], int elem, int size){
    
    int s=0;
    int e=size-1;

    int ans = -1;

    while (s<=e)
    {
        int mid = (s+e)/2;

        cout<<mid<<endl;

        if (arr[mid]==elem){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>elem){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}

int main(){

    int arr[18] = {5,6,7,9,11,12,18,18,18,18,18,18,18,18,18,18,18,70};

    int size = sizeof(arr)/sizeof(int);
    int elem = 18;

    cout<<size<<"-size"<<endl;

    int index = binsearch(arr, elem, size);

    

    if (index==(-1)){
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"Element found at "<<index<<endl;
    }

    return 0;
}