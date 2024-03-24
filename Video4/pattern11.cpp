
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
        while (j<i+1){
            cout<<char(r-i+j + 'A' - 1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}