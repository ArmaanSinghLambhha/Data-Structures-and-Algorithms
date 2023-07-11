#include <iostream>
#include <map>

using namespace std;


// maps key pointer approach

int main(){
    map <int , string> m;

    m[1] = "armaan";
    m[13] = "abhishek";
    m[2] = "shubhom";

    m.insert({5 , "adiru"});
    cout << "before erase "<<endl;

    for(auto i:m ){
        cout << i.first << " " << i.second <<endl;
    }

    cout << "finding -13 " <<m.count(-13) <<endl;

    m.erase(13);

    cout << "after erase "<<endl;

    for (auto i:m){
        cout << i.first << " " << i.second << endl;
    }cout << endl <<endl;

    auto it = m.find(5);

    for(auto i=it; i!=m.end();i++){
        cout << (*i).first << endl;
    }
    return 0;
}