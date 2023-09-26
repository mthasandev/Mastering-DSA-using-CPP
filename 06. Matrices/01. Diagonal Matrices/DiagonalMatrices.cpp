#include<iostream>

using namespace std;


class Diagonal {
    private:
        int n;
        int *A;
    public:
        Diagonal(int n){
            this->n = n;
            this->A = new int[n];
        }
        void set(int i, int j, int value){
            A[i-1] = value;
        }
        void get(int i, int j){
            cout<<A[i-1];
        };
        void display(){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i==j){
                        cout<<A[i];
                    }
                    else{
                        cout<<0;
                    }
                }
                cout<<endl;
            }
        }

        ~Diagonal(){
            delete []A;
        }


};

int main(){
    Diagonal d = Diagonal(3);
    d.set(1, 1, 5);
    d.set(2, 2, 7);
    d.set(3, 3, 9);
    d.display();
    d.get(1, 1);
}