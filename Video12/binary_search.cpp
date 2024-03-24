#include<iostream>
using namespace std;

int main(){

    int arr[7] = {2,5,6,7,18,65,70};

    int elem = 18;

    int index = -1;

    for(int s=0, e=7; s<=e; ){
        int mid = (s+e)/2;

        cout<<mid<<endl;

        if (arr[mid]==elem){
            index = mid;
            break;
        }
        else if(arr[mid]>elem){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    if (index==(-1)){
        cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"Element found at "<<index<<endl;
    }

    return 0;
}