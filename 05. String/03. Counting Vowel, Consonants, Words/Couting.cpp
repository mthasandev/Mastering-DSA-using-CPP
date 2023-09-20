#include<iostream>
#include<string>
using namespace std;


int countWords(string str){
    int wordCount=0;
    if(str.empty()){
        return 0;
    }
    for(int i=0; i<str.length(); i++){
        if(str[i]==' ' && str[i-1]!=' '){
            wordCount++;
        }
    }
    return wordCount;
    //buggy 
}

int countVowels(string str){
    int vowels=0;
    for(int i=0; i<str.length(); i++){
        if(str.at(i)=='a' || str.at(i)=='e' || str.at(i)=='i' || str.at(i)=='o' || str.at(i)=='u'){
            vowels++;
        }
    }
    return vowels;
}

int main(){
    string str = "this string would be counted";
    // cout<<str.at(-1)<<endl;
    cout<<countWords("  ")<<endl;
    cout<<countVowels("aeiou")<<endl;
    return 0;
}