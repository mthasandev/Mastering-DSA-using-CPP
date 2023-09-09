#include<iostream>


using namespace std;

int main(){

    //static array
    int a[3] = {1,2,3};


    //dynamic memory allocation using heap
    int *ptr = new int[3];

    ptr[0] = 5;
    ptr[1] = 6;
    ptr[2] = 7;

    cout<<"printing first array: "<<endl;
    for(int i=0; i<3; i++){
        cout<<a[i]<<" "<<endl;
    }
    cout<<"printing second array: "<<endl;
    for(int i=0; i<3; i++){
        cout<<ptr[i]<<" "<<endl;
    }


    return 0;
}