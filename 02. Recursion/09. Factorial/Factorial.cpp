#include<iostream>

using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    // return n*factorial(n-1);
    return factorial(n-1)*n;
}

int main(){
    int facto = factorial(10);
    cout<<facto<<endl;
    return 0;
}