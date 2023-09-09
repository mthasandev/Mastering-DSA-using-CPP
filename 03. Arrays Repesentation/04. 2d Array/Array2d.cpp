#include<iostream>

using namespace std;

int main(){

    //method 1
    int a[2][3] = {{1,2,3},{4,5,6}};

    //method 2
    int *b[2];
    b[0]= new int[3];
    b[1]= new int[3];


    //method 3
    int **c;
    c = new int*[2];
    c[0] = new int[3];
    c[1] = new int[3];

    return 0;
}