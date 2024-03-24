
#include<iostream>
using namespace std;

int main(){

    int r;
    cin>>r;

    int c;
    cin>>c;

    int i=0;

    int count = 0;


    while (i<r){

        int j=0;
        while (j<c){
            cout<<char(count+'A')<<" ";
            j++; 
            count++;
        }
        cout<<endl;
        i++;
    }
}