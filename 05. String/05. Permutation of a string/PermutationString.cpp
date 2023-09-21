#include<iostream>
#include<string>

using namespace std;

void permutation1(string s, int k){
    static int A[3]={0};
    static char res[3];
    int i;

    if(k==3){
        for(int x=0; x<k; x++){
            cout<<res[x];
        }
        cout<<"\n";
    }
    else{
        for(i=0; i<3; i++){
            if(A[i]==0){
                res[k]=s[i];
                A[i]=1;
                permutation1(s, k+1);
                A[i]=0;
            }
        }
    }
    
}

void permutation2(string s, int low, int high){
    if(low==high){
        cout<<s;
        cout<<"\n";
    }
    else{
        for(int i=low; i<=high; i++){
            swap(s[low], s[i]);
            permutation2(s, low+1, high);
            swap(s[low], s[i]);
        }
    }
}

int main(){
    permutation1("ABC", 0);
    permutation2("ABC", 0, 2);
    return 0;
}