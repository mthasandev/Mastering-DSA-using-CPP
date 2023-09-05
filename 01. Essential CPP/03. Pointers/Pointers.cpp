#include<iostream>

using namespace std;

int main(){

    int a = 10;
    int *p1;
    p1 = &a; //assigning address of a

    cout<<sizeof(p1)<<endl;
    cout<<*p1<<endl; //dereferencing

    int *p2;
    p2=(int *)malloc(5*sizeof(int)); // c-style

    int *p3;
    p3 = new int[3]; //cpp-style of using heap
    p3[0] = 1;
    p3[1] = 2;
    p3[2] = 3;
    for(int x=0; x<3; x++ ){
        cout<<p3[x]<<endl;
    }

    delete [] p2;
    delete [] p3;
    // delete release memory when using malloc
    return 0;
}


/* pointers used for accessing 
heap, resources and parameter passing */

/* maloc is used for accessing a memory in the heap */

/* pointer takes 8 bytes any type of pointer independent of datatype*/