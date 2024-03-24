#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int note_count;
    int total = 0;

    switch (100){
        case 100 : note_count=n/100;
                total+=note_count;
                n-=(note_count*100);
        case 50 : note_count=n/50;
                total+=note_count;
                n-=(note_count*50);
        case 20 : note_count=n/20;
                total+=note_count;
                n-=(note_count*20);
        case 1 : note_count=n/1;
                total+=note_count;
                n-=(note_count*1);
    }

    cout<<"Total Notes = "<<total;

    double d= 9/10;
    cout<<d;

    return 0;
}