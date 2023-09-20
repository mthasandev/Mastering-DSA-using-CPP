#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "this string needs to be capitalize";
    string capitalizedStr="";
    for(int i=0; i<str.length(); i++){
        if(i==0){
            capitalizedStr += (str[i]-32);
        }
        else {
            capitalizedStr += str[i];
        }
        
    }
    cout<<str<<endl;
    cout<<capitalizedStr<<endl;

}