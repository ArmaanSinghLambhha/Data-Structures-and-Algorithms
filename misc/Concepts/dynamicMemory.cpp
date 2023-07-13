#include <iostream>

using namespace std;

/*
    static memory allocation
    - stack 
    - clears automatically

*/

/*
    dynamic memory allocation
    - Heap
    - does not clear automatically
    - delete memory using delete keyword
*/
int main(){
    
    // static memory allocation syntax
    int i = 5;
    int* ptr = &i;

    // dynamic memory allocation syntax
    int* pointer = new int; // returns the adress will have to use pointers to use the memory
    *pointer = 5;


    // dynamic array creation
    int n = 5;
    int* arr = new int[n];


    return 0;
}