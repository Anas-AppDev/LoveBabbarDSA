#include<iostream>
#include<queue>
using namespace std;


int main(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    for (int i=0; i<6; i++){
        cout<<q.front()<<" ";
        q.pop();
    }



    // cout<<""<<endl;
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front();
    // for (int i:s){
    //     cout<<i<<" ";
    // }

    return 0;
}