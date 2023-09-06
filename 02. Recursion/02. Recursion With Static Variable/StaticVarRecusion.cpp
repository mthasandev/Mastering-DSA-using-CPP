#include<iostream>

using namespace std;

int staticRec(int n){
    static int x=0;
    if(n>0){
        x++;
        return staticRec(n-1)+x;
    }
    return 0;
}

int main(){
    int result = staticRec(5);
    cout<<result<<endl;
    return 0;
}

/* here static var is created only one time
then incremented last incremented value keeps added to all the returns
 */