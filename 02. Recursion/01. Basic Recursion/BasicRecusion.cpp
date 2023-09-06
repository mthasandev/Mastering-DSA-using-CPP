#include<iostream>

using namespace std;

void returnAndCall(int n){
    if(n>0){
        cout<<n<<endl;
        returnAndCall(n-1);
    }
}
void callAndReturn(int n){
    if(n>0){
        callAndReturn(n-1);
        cout<<n<<endl;
    }
}

int main(){
    cout<<"Return and call recusion: "<<endl;
    returnAndCall(4);
    cout<<"Call and return recusion: "<<endl;
    callAndReturn(4);
    return 0;
}

/* There are two parts of a recursion one is ascending, another is decending
ascending the part before calling the function within decending is anything after the call
 */

/* loops and recursion:
1. loops are only ascending, recursion got both ascending and decending
2. recursion use stack
 */