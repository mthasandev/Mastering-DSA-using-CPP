#include<iostream>

using namespace std;

int NaturalSum(int n){
    if(n==1){
        return 1;
    }
    return n + NaturalSum(n-1);
}


int main(){
    int sum = NaturalSum(10);
    cout<<sum<<endl;
    return 0;
}