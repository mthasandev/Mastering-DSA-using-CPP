#include<iostream>

using namespace std;

int main(){
    int *p = new int[3];
    p[0] = 5; 
    p[1] = 6;
    p[2] = 7;

    for(int i=0; i<3; i++){
        cout<<p[i]<<endl;
    }
    cout<<endl;
    int *q = new int[5];

    // first let's copy everything p has to q
    for(int i=0; i<3; i++){
        q[i]=p[i];
    }
    // then delete p
    delete [] p;
    p = q;
    
    p[3] = 10;
    p[4] = 11;
    // then make the q pointer null

    for(int i=0; i<5; i++){
        cout<<p[i]<<endl;
    }
    q=NULL;


    
}