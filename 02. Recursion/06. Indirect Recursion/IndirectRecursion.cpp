#include<iostream>
using namespace std;

void functionB(int n);
void functionA(int n){
    if(n>0){
        cout<<n<<endl;
        functionB(n-1);
    }
}
void functionB(int n){
    if(n>1){
        cout<<n<<endl;
        functionA(n/2);
    }
}

int main(){
    functionA(20);
    return 0;
}

/* 
types of recursion:
01. Tail recursion: last statement is the recursive function call.
02. Head recursion: the function first at top calls itself 
then all other tasks happens in returning time
03. Tree recursion: Calling it self more than one time
04. Indirect recursion: Two functions calling each other in a circular fashion
05.. Nested Recursion: upnext..


 */