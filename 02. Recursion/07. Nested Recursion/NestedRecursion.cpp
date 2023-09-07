#include<iostream>

using namespace std;

int NestedRec(int n){
    if(n>100){
        return n-10;
    }
    return NestedRec(NestedRec(n+11));
    
}

int main(){
    int r = NestedRec(95);
    cout<<r<<endl;
    return 0;
}

/* 
types of recursion:
01. Tail recursion: last statement is the recursive function call.
02. Head recursion: the function first at top calls itself 
then all other tasks happens in returning time
03. Tree recursion: Calling it self more than one time
04. Indirect recursion: Two functions calling each other in a circular fashion
05.. Nested Recursion: calling itself as a parameter in own call


 */