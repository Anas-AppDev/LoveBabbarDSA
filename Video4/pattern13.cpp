
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
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}