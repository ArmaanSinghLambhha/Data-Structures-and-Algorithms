/*

    A array contains increase or decreasing order of number. Find the pivot index in the array or the minimum value
    for example
    arr[4] = { 8 , 9 , 4 , 5 };
    n = 4;

    The pivot index is 2

    Explaination : the array is increasing order but rotated hence the breakpoint is at index 2 or number 4
*/


#include <iostream>

using namespace std;

int findPivot(int arr[] , int n ){    
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    
    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid +1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return end;
}

int main(){
    
    int arr[4] = { 8 , 9 , 4 , 5 };
    int n = 4;
    int pivotIndex = findPivot(arr,n);

    cout<<"The pivot index is "<<pivotIndex;
    return 0;
}
