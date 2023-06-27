#include <iostream>

using namespace std;

// Reverse each word in a given string

string reverse(string w){
            int e = w.size() -1;
            int s = 0;
            while(s <= e){
                swap(w[s] , w[e]);
                s++;
                e--;
            }
            return w;
}

string reversewords(string s){
        int len = s.length();

        string word = "";
        string finalWord = "";

        for(int i=0 ; i <= len ; i++){

            if(s[i] == ' ' || s[i] == '\0'){
                // word completed
                finalWord += reverse(word) + " ";
                word = "";
            }
            else{
                word += s[i];
            }
        }
        int finalWordLen = finalWord.length();
        finalWord = finalWord.erase(finalWordLen-1);
        return finalWord;
}

int main(){
    cout << reversewords("like a player")<<endl;
    return 0;
}