#include<iostream>

using namespace std;

int power(int num, int exponent){
    if(exponent==1){
        return num;
    }
    return num*power(num, exponent-1);
}

int main(){
    int result = power(5, 3);
    cout<<result<<endl;
    return 0;
}