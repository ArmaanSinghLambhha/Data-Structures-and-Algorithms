#include <iostream>

using namespace std;

int getLength(char name[]){
    int count = 0;
    for (int i=0 ; name[i] != '\0' ; i++){
        count ++;
    }
    return count;
}

void reverse (char name[] , int len){
    int s = 0;
    int e = len -1;

    while(s <= e){
        swap(name[s] , name[e]);
        s++;
        e--;
    }
    cout << name <<endl;
}
int main(){

    char name[6];

    cout<<"Enter your name "<<endl;
    cin>>name;
    //name[2] = '\0'; // null character

    cout<<"Your name is ";
    cout<<name<<endl;

    cout << "Length is " << getLength(name)<<endl;
    cout << "Reverse is ";
    reverse(name , getLength(name));
    return 0;
}