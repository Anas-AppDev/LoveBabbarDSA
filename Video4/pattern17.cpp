
#include<iostream>
using namespace std;

int main(){

    int r;
    cin>>r;

    int c;
    cin>>c;

    int i=0;



    while (i<r){

        int j=0;

        while (j<r-i){
            cout<<j+1;
            j++; 
        }

        int sCount = 0;
        while (sCount<i+1){
            cout<<"**";
            sCount++;
        }

        int k = 0;
        while (k<r-i){
            cout<<c-k-i;
            k++;
        }


        cout<<endl;
        i++;
    }
}