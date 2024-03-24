
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

        int space = r-i-1;
        while(space){
            cout<<" ";
            space--;
        }

        while (j<i+1){
            cout<<j+1;
            j++;
        }

        int k = 0;
        while (k<i){
            cout<<i-k;
            k++;
        }

        cout<<endl;
        i++;
    }
}