#include<iostream>
using namespace std;


int bruteForce(int x){

    int i = 0;

    while (i*i <= x){
        i++;
    }

    cout<<i-1;

    return i-1;

}

int binsearch(int elem){

    int s = 0;
    int e = elem-1;

    int ans = -1;

    while (s<=e){

        int mid =  s + ((e-s)/2);

        if (mid*mid==elem){
            return mid;
        }
        if ((mid*mid)<elem){
            s = mid+1;
            ans=mid;
        }
        else {
            e = mid-1;
        }
    }

    return ans;

}

double ansInDouble(int prec, int existSol, int elem){

    double fact = 1;
    double ans = existSol;

    for (int i=0; i<prec; i++){
        fact/=10;
        for (double j=ans; j*j<elem; j+=fact ){
            ans = j;
        }
    }

    return ans;
}


int main(){

    int elem;

    cin>>elem;

    // bruteForce(elem);

    int existSol = binsearch(elem);

    cout<<existSol<<endl;

    // cout<<ansInDouble(3, existSol, elem);
    
}