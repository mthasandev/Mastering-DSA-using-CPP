#include<iostream>

using namespace std;

void treeRec(int n){
    if(n>0){
        cout<<" "<<n;
        treeRec(n-1);
        treeRec(n-1);
    }
}


int main(){
    cout<<"Tree Recursion: "<<endl;
    treeRec(3);
    cout<<"\n"<<endl;
    return 0;
}

/* 
types of recursion:
01. Tail recursion: last statement is the recursive function call.
02. Head recursion: the function first at top calls itself 
then all other tasks happens in returning time
03. Tree recursion: Calling it self more than one time
04. Indirect recursion: upnext..
05.. Nested Recursion: upnext..


 */