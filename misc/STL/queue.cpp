#include <iostream>
#include <queue>
// first in first out concept

using namespace std;

int main(){
    queue <string>q;

    q.push("Armaan");
    q.push("shubham");
    q.push("Adarsh");

    cout << "Size before pop "<<q.size()<<endl;
    cout << "First Element "<<q.front()<<endl;

    q.pop();

    cout << "Size after pop "<<q.size()<<endl;
    cout << "First Element after pop"<<q.front()<<endl;
    return 0;
}