#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(2);
    d.push_back(4);
    d.push_back(5);
    d.push_back(7);
    d.push_back(9);

    d.push_front(8);
    d.push_front(16);

    cout<<"before pop"<<endl;
    for (int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();
    d.pop_front();
    cout<<"after pop"<<endl;
    for (int i:d){
        cout<<i<<" ";
    }


    cout<<endl;
    // cout<<"begin = "<<d.begin()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"after erase"<<endl;
    for (int i:d){
        cout<<i<<" ";
    }


    return 0;
}