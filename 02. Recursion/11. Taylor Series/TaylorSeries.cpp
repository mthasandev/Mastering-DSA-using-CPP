#include<iostream>

using namespace std;

double TailorSeries(int x, int n){
    static double p=1, f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r= TailorSeries(x, n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

int main(){
    double result = TailorSeries(1, 10);
    cout<<result<<endl;
    return 0;
}