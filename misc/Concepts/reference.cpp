#include <iostream>

using namespace std;

// pass by value
void passByValue(int value){
    // creates a different copy
    value ++;
}

// pass by reference
void passByReference(int& value){
    // points the same memory with a different name
    value ++;
}

int main(){
    
    int n = 5;
    cout << endl << endl << "Pass by value " << endl << endl;
    cout << "Before - " << n << endl;
    passByValue(n);
    cout << "After - " << n << endl;

    cout << endl << endl << "Pass by reference " << endl << endl;
    cout << "Before - " << n << endl;
    passByReference(n);
    cout << "After - " << n << endl;
    return 0;
}