#include<iostream>

using namespace std;

int factorial(int num){
    if(num<=1){
        return 1;
    }
    return num*factorial(num-1);
}

//using basic factorial formula
int nCr1(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

//using pascals triangle
int nCr2(int n, int r){
    if(r==0 || r==n){
        return 1;
    }
    return nCr2(n-1, r-1)+nCr2(n-1, r);
}

int main(){
    int result = nCr2(5, 4);
    cout<<result<<endl;
    return 0;
}