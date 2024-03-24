#include<iostream>
using namespace std;

int main(){

    int i=0, j=1;

    cout<<i<<" "<<j;

    int sum = 0;

    for (int n=0;n<10;n++){

        sum = i+j;
        i=j;
        j=sum;

        cout<<" "<<sum<<" ";

    }
}