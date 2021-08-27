# DSA-Questions
Codes in CPP and Python
## Array
1. Reverse the array
string reverseWord(string str){
       string rev = "";
    for(int i = str.size()-1;i>=0 ;i--){
        rev += str[i];
    }
    
    return rev;
