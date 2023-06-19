#include <iostream>
#include <list>

// direct access is not possible

using namespace std;

int main(){
    list <int> l;
    list <int> n(5,100);

    cout<<"Printing n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    l.push_back(1);
    l.push_front(2);

    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After erase "<<endl;

    for(int i:n){
        cout<<i<<" ";
    }
    cout<<"Size of list is "<<l.size()<<endl;
    return 0;
}