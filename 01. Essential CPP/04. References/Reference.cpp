#include<iostream>

using namespace std;

int main(){

    int a = 10;
    int &r = a;
    cout<<r<<endl;
    ++r;
    cout<<a;
    return 0;

}

/* reference variable must be initialized during declaration 
reference is nothing but another name(let's say nickname) of another variable
*/
