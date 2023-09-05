#include<iostream>

using namespace std;

int main(){
    int arr[5]={1, 3,4};
    
 
    cout<<sizeof(arr)<<endl;

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;//buggish output
    
   

    return 0;
}