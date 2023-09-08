#include<iostream>

using namespace std;


int fibonacciIterative(int num){
    if(num<=1){
        return 1;
    }
    int sum=0;
    int prev1=0;
    int prev2=1;
    for(int i=1; i<num; i++){
         sum=prev1+prev2;
         prev1=prev2;
         prev2=sum;
    }

    return sum;

}
int fibonacciRecursive(int num){
    if(num<=1){
        return num;
    }
    return fibonacciRecursive(num-1)+fibonacciRecursive(num-2);
}



int main(){
    int result1 = fibonacciIterative(10);
    cout<<result1<<endl;
    int result2 = fibonacciRecursive(10);
    cout<<result2<<endl;
    return 0;
}