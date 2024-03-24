#include<iostream>
using namespace std;

int main(){

    char a;
    cin>>a;

    if (isdigit(a)){
        cout<<"Digit";
    }
    else if (islower(a)){
        cout<<"Lower Case char";
    }
    else{
        cout<<"Upper Case char";
    }

    
}