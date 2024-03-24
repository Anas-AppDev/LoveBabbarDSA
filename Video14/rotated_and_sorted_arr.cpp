#include<iostream>
using namespace std;

int pivot(int arr[], int size, int elem){

    int s = 0;
    int e = size-1;

    while (s<e){

        int mid = s  + ((e-s)/2);

        if (arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }

    return s;
}


int binsearch(int arr[], int s, int e, int elem){

    int ans = -1;

    while (s<=e){

        int mid =  s + ((e-s)/2);

        if (arr[mid]==elem){
            ans=mid;
        }
        if (arr[mid]<elem){
            s = mid+1;
        }
        else {
            e = mid-1;
        }
    }

    return ans;

}

int main(){

    int arr[7] = {21,23,28,5,8,11,15};

    int elem = 15;
    int size=7; 
    int p = pivot(arr, size, elem);

    cout<<p<<"pivot";

    if (elem<=arr[size-1] && elem>=arr[p]){
        cout<<binsearch(arr, p, size-1, elem);
    }
    else{
        cout<<binsearch(arr, 0, p-1, elem);
    }

    return 0;
}
