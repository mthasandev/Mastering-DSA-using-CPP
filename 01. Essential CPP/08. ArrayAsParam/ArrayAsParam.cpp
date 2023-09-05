#include<iostream>
using namespace std;


void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

int * createArray(int n){
    int *p;
    p = (int *)malloc(n*sizeof(int));
    return p;
}
int main(){
    int a[4] = {1,2,3,4};
    printArray(a, 4);

    int *A;
    A = createArray(2);
    A[0] = 55;
    A[1] = 56;

    printArray(A, 2);
    return 0;
}

/* 
in c or cpp arrays cannot be passed by value
it gets passed by address
 */