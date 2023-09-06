#include<iostream>

using namespace std;

void tailRec(int n){
    if(n>0){
        cout<<" "<<n;
        tailRec(n-1);
    }
}
//converting the same recursion to loop

void tailRecToLoop(int n){
    while(n>0){
        cout<<" "<<n;
        n--;
    }
}//better to use loop than tail recursion because of less space complexity

int main(){
    cout<<"Recursion: "<<endl;
    tailRec(5);
    cout<<"\n"<<endl;
    cout<<"Loop: "<<endl;
    tailRecToLoop(5);
    cout<<"\n"<<endl;
    return 0;
}

/* 
types of recursion:
01. Tail recursion: last statement is the recursive function call
02. Head recursion: upnext..
03. Tree recursion: upnext..
04. Indirect recursion: upnext..
05.. Nested Recursion: upnext..


 */