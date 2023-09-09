#include<iostream>

using namespace std;

int main(){
    int a[5]; // upon declaration there will be unexpected values
    int b[5] = {1, 2, 3, 4, 5}; //5 values with declaration & initialization
    int c[] = {1, 2, 3, 4, 5}; //5 values with declaration & initialization without specifying the number of elements
    int d[5] = {9,10}; //first two values will be 9,10 others will be 0
    int e[5] = {}; //all values will be 0

    for(int i=0; i<5; i++)
        cout<<e[i]<<endl;

    return 0;
}