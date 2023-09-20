#include<iostream>
#include<string>

using namespace std;

string reverse(string str){
    string reversedStr = "";
    for(int i=str.length()-1; i>=0; i--){
        reversedStr+=str[i];
    }
    return reversedStr;
}

bool palindrome(string str){
    for(int i=0; i<(str.length()-1)/2; i++){
        if(str[i]!=str[str.length()-i-1]){
            return false;
        }
    }
    return true;
}

bool anagram(string str1, string str2){
    int flagArray[26] = {0};
    for(int i=0; i<str1.length(); i++){
        flagArray[str1[i]-97]+=1;
    }
    for(int i=0; i<str2.length(); i++){
        flagArray[str2[i]-97]-=1;
        if(flagArray[str2[i]-97]<0){
            return false;
        }
    }
    return true;
}



int main(){
    cout<<reverse("hello")<<endl;
    cout<<palindrome("madam")<<endl;
    cout<<anagram("decimal", "medical")<<endl;
    return 0;
}