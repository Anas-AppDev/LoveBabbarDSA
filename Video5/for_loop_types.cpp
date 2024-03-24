
#include<iostream>
using namespace std;


void type1(){
    for (int i=1; i<=10; i++){
        cout<<i<<endl;
    }
}

void type2(){
    int i=1;
    for (;;){
        if (i<=10)
        {
            cout<<i<<endl;   
        }
        else {
            break;
        }
        i++;
    }
}

void type3(){
    for (int i=0, j=1; i<=10 || j<=20; i++, j++){
        cout<<i<<" "<<j<<endl;
    }
}

int main(){

    // type1();
    // type2();
    type3();

    return 0;
}
