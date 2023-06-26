#include <iostream>

using namespace std;

int main(){
        string str = "output";
        int arr[26] = {0};
        int number = 0;
        for (int i = 0 ; i < str.length() ; i++){
            if(str[i] >= 'a' && str[i] <='z'){
                number = str[i] - 'a';
            }
            else{
                number = str[i] - 'A';
            }
            arr[number]++;
        }
        
        int maxi = 0 , ans = 0;
        for(int j=0 ; j < 26 ; j++){
            if(maxi < arr[j]){
                maxi = arr[j];
                ans = j;
            }
        }
        
        char ch = 'a' + ans;
        
        cout << ch << endl;
        return 0;
    
}