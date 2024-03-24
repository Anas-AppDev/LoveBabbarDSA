#include<iostream>
#include<stack>
using namespace std;


int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    for (int i=0; i<5; i++){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}