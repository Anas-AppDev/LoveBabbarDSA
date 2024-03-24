
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
        while (space){
            cout<<" ";
            space--;
        }
        
        while (j<i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}