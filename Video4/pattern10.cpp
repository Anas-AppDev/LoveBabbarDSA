
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
            cout<<char(i+'A'+j)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}