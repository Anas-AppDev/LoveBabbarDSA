#include<iostream>
using namespace std;

int ifPossible(int arr[], int size, int m, int mid){
    int pageSum = 0;
    int studentCount = 1;

    for (int i=0; i<size; i++){

        cout<<"i "<<i<<endl;
        if ((pageSum+arr[i])<=mid){
        
            pageSum+=arr[i];
            cout<<"pageSum "<<pageSum<<" "<<mid<<endl<<endl;
        }
        else{
            studentCount++;
            cout<<studentCount<<endl;
            if (studentCount<=m){
                cout<<"true"<<endl;
                pageSum=arr[i];
                cout<<"pageSum "<<pageSum<<" "<<mid<<endl<<endl;
            }
            else{
                cout<<"false"<<endl;
                return false;
            }
        }
    }

    return true;
}

int binsearch(int arr[], int size, int m){

    int s = 0;
    int sum = 0;

    for (int i=0; i<size; i++){
        sum+=arr[i];
    }

    cout<<"Sum "<<sum<<endl;

    int e = sum;

    int ans = -1;

    while (s<=e){
        int mid = s + ((e-s)/2);
        if (ifPossible(arr,size,m,mid)){
            ans = mid;
            cout<<"ans "<<ans<<endl;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }

    return ans;



}

int main(){

    int arr[4] = {20,40,60,80};
    int size = 4;
    int m = 2;

    cout<<binsearch(arr, size, m);

    return 0;
}