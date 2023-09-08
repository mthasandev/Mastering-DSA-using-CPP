#include<iostream>

using namespace std;

double hornersRuleRecursion(int x, int n){
    static double s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+x*s/n; //careful with the precedence otherwise expected double might come as int
        return hornersRuleRecursion(x, n-1);
    }
}

double hornersRuleLoop(int x, int n){
    static double s=1;
    for(; n>0; n--){
        s=1+x*s/n; //careful with the precedence otherwise expected double might come as int
    }
    return s;
}

double taylorSeriesBasicLoop(int x, int n){
    double s=1;
    double num=1;
    double denom=1;
    for(int i=1; i<=n; i++){
        num*=x;
        denom*=i;
        s+=num/denom; 
    }
    return s;
}

int main(){
    // double result = hornersRuleRecursion(2, 10);
    double result = hornersRuleLoop(2, 10);
    cout<<result<<endl;
    return 0;
}