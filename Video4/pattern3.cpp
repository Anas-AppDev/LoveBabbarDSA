#include<iostream>
using namespace std;

int main(){

    int r;
    cin>>r;

    int c;
    cin>>c;

    int i=0;

    int count = 1;

    while (i<r){

        int j=0;
        while (j<c){
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
}