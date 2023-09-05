#include<iostream>

using namespace std;

// definition only
struct Rectangle
{
    /* data */
    int length;
    int breadth;
};

// definition with declaration

struct Rectangle2
{
    /* data */
    int length;
    int breadth;
} r2;

int main(){
    struct Rectangle r1; 
    r1 = {5,6};
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    r2 = {8,9};
    cout<<r2.length<<endl;
    cout<<r2.breadth<<endl;
    return 0;
}

/* padding or taking extra memory is done 
in the structure to for easily accessing memory 
by the machine at once. ie. taking 4bytes memory 
for the char datatype instead of 1 */