#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v;

    vector <int> a(5,1);

    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity "<<v.capacity()<<endl;
    cout<<"Size is "<<v.size()<<endl;

    cout<<"Element at index 2" <<v.at(2)<<endl;
    cout<<"Front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    return 0;
}