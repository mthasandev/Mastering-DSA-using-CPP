#include<iostream>

using namespace std;

class UpperTriangularMatricesRowMajor{
    private:
        int size;
        int *A;
    public: 
        UpperTriangularMatricesRowMajor(int size){
            this->size = size;
            A = new int[size*(size+1)/2];
        }
        ~UpperTriangularMatricesRowMajor(){
            delete []A;
        }
        void set(int  i, int j, int value){
            if(j>=i){
                A[(size*(i-1)-((i-2)*(i-1))/2)+(j-1)] = value;
            }
        };
        int get(int i, int j){
            if(j>=i){
                return A[(size*(i-1)-((i-2)*(i-1))/2)+(j-1)];
            }
            return 0;
        };
        void display(){
            for(int i=1; i<=size; i++){
                for(int j=1; j<=size; j++){
                    if(j>=i){
                       cout << A[(size*(i-1)-((i-2)*(i-1))/2)+(j-1)] << " ";
                    }
                    else{
                        cout<<"0"<<" ";
                    }
                }
                cout<<"\n"<<endl;
            }
        };

};

class UpperTriangularMatricesColumnMajor{
    private:
        int size;
        int *A;
    public: 
        UpperTriangularMatricesColumnMajor(int size){
            this->size = size;
            A = new int[size*(size+1)/2];
        }
        ~UpperTriangularMatricesColumnMajor(){
            delete []A;
        }
        void set(int  i, int j, int value){
            if(j>=i){
                A[j*(j-1)/2+i-1] = value;
            }
        };
        int get(int i, int j){
            if(j>=i){
                return A[j*(j-1)/2+i-1];
            }
            return 0;
        };
        void display(){
            for(int i=1; i<=size; i++){
                for(int j=1; j<=size; j++){
                    if(j>=i){
                       cout << A[j*(j-1)/2+i-1] << " ";
                    }
                    else{
                        cout<<"0"<<" ";
                    }
                }
                cout<<"\n"<<endl;
            }
        };

};



int main(){
    UpperTriangularMatricesRowMajor ut1 = UpperTriangularMatricesRowMajor(3);
    UpperTriangularMatricesColumnMajor ut2 = UpperTriangularMatricesColumnMajor(3);


    ut1.set(1, 1, 5);
    ut1.set(1, 2, 6);
    ut1.set(2, 2, 7);
    ut1.set(1, 3, 8);
    ut1.set(2, 3, 9);
    ut1.set(3, 3, 10);
    ut1.display();

    ut2.set(1, 1, 5);
    ut2.set(1, 2, 6);
    ut2.set(2, 2, 7);
    ut2.set(1, 3, 8);
    ut2.set(2, 3, 9);
    ut2.set(3, 3, 10);
    ut2.display();
    return 0;
}