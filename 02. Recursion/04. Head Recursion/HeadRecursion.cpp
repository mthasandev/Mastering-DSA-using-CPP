#include<iostream>

using namespace std;

void headRec(int n){
    if(n>0){
        headRec(n-1);
        cout<<" "<<n;
    }
}
//converting head recursion is not straight forward as the previous one 
// need some special function


int main(){
    cout<<"Head Recursion: "<<endl;
    headRec(5);
    cout<<"\n"<<endl;
    return 0;
}

/* 
types of recursion:
01. Tail recursion: last statement is the recursive function call.
02. Head recursion: the function first at top calls itself 
then all other tasks happens in returning time
03. Tree recursion: upnext..
04. Indirect recursion: upnext..
05.. Nested Recursion: upnext..


 */