#include<iostream>

using namespace std;

class LowerTriRowMajor{
    private:
        int size;
        int *A;
    public: 
        LowerTriRowMajor(int size){
            this->size = size;
            A = new int[size*(size+1)/2];
        }
        ~LowerTriRowMajor(){
            delete []A;
        }
        void set(int  i, int j, int value){
            if(i>=j){
                A[i*(i-1)/2+j-1] = value;
            }
        };
        int get(int i, int j){
            if(i>=j){
                return A[i*(i-1)/2+j-1];
            }
            return 0;
        };
        void display(){
            for(int i=1; i<=size; i++){
                for(int j=1; j<=size; j++){
                    if(i>=j){
                       cout << A[i*(i-1)/2+j-1] << " ";
                    }
                    else{
                        cout<<"0"<<" ";
                    }
                }
                cout<<"\n"<<endl;
            }
        };

};
class LowerTriColMajor{
    private:
        int size;
        int *A;
    public: 
        LowerTriColMajor(int size){
            this->size = size;
            A = new int[size*(size+1)/2];
        }
        ~LowerTriColMajor(){
            delete []A;
        }
        void set(int  i, int j, int value){
            if(i>=j){
                A[size*(j-1)-(j-2)*(j-1)/2+i-j] = value;
            }
        };
        int get(int i, int j){
            if(i>=j){
                return A[size*(j-1)-(j-2)*(j-1)/2+i-j];
            }
            return 0;
        };
        void display(){
            for(int i=1; i<=size; i++){
                for(int j=1; j<=size; j++){
                    if(i>=j){
                       cout << A[size*(j-1)-(j-2)*(j-1)/2+i-j] << " ";
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
    LowerTriRowMajor lt1 = LowerTriRowMajor(3);
    LowerTriColMajor lt2 = LowerTriColMajor(3);
    lt2.set(1, 1, 5);
    lt2.set(2, 1, 6);
    lt2.set(2, 2, 7);
    lt2.set(3, 1, 8);
    lt2.set(3, 2, 9);
    lt2.set(3, 3, 10);
    lt2.display();
    return 0;
}