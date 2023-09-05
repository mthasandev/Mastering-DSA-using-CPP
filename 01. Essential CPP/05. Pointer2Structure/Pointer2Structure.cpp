#include<iostream>

using namespace std;

struct Rectangle
{
    /* data */
    int length;
    int breadth;
};

int main(){
    struct Rectangle r1 = {1,3};
    struct Rectangle *p1=&r1;

    r1.length = 13;
    (*p1).length = 20;
    p1->length = 20;

    cout<<p1->length<<endl;


    //in heap using malloc
    struct Rectangle *P;
    P = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    P->length = 55;
    P->breadth= 46;

    cout<<P->breadth<<endl<< P->length<<endl;
    return 0;
}