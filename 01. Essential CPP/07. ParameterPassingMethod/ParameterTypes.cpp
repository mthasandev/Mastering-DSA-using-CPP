#include<iostream>

using namespace std;
void swapByValue(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swapByAddress(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swapByReference(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int a, b;
    a = 10;
    b = 20;
    swapByValue(a, b); //pass by value(swap doesnt work)
    cout<<a<<" "<<b<<endl;
    swapByAddress(&a,&b); //pass by address(swap works)
    cout<<a<<" "<<b<<endl;
    swapByReference(a,b); //pass by reference(swap works)
    cout<<a<<" "<<b<<endl;
    return 0;
}

/* parameter passing:
1. pass by value
2. pass by Address
3. pass by Reference
 */