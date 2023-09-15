#include<iostream>

using namespace std;

class Array{
    int *A;
    int size;
    int length;
    public:
        Array(){
            size=10;
            length=0;
            A = new int[10];
        }
        Array(int size){
            this->size=size;
            length=0;
            A = new int[size];
        }
        void display(){
            cout<<"[";
            for(int i=0; i<length; i++){
                if(i==length-1){
                    cout<<" "<<A[i]<<"";
                }
                else{
                    cout<<" "<<A[i]<<",";
                }
            }
            cout<<" ]\n";
        }
        void append(int value){
            if(length<size){
                A[length++]=value;
            }
        }
        void insert(int value, int index){
            if(index>=0 && index<=length){
                for(int i=length; i>index; i--){
                    A[i] = A[i-1];
                }
                A[index] = value;
                length++;
            }
        }
        int remove(int index){
            int result = 0;
            if(index>=0 && index<=length){
                result = A[index];
                for(int i=index; i<length-1; i++){
                    A[i]=A[i+1];
                }
                length--;
                return result;
            }
            return 0;
        }
        int get(int index){
            if(index>=0 && index<=length){
                return A[index];
            }
            return -1;

        }
        void set(int index, int value){
            if(index>=0 && index<=length){
                A[index] = value;
            }
        }
        int linearSearch(int value){
            for(int i=0; i<length; i++){
                if(A[i]==value){
                    return i;
                }
            }
            return -1;
        }

        int binarySearch(int value){
            int l=0, h=length-1, mid;
            while(l<=h){
                mid = (l+h)/2;
                if(A[mid]==value){
                    return mid;
                }
                else if(value>A[mid]){
                    l = mid+1;
                }
                else{
                    h = mid - 1;
                }
            }
            return -1;
        }
           
        int max(){
            int maximum = A[0];
            for(int i=0; i<length; i++){
                if(A[i]>maximum){
                    maximum=A[i];
                }
            }
            return maximum;
        }
        int min(){
            int minimum = A[0];
            for(int i=0; i<length; i++){
                if(A[i]<minimum){
                    minimum=A[i];
                }
            }
            return minimum;
        }
        int sum(){
            int sum = 0;
            for(int i=0; i<length; i++){
                sum+=A[i];
            }
            return sum;
        }
        float average(){
            return sum()/(float)length;
        }
        void swap(int *x, int *y){
            int temp;
            temp = *x;
            *x = *y;
            *y = temp;
        }
        void reverse(){
            for(int i=0; i<length/2; i++){
                swap(&A[i], &A[length-i-1]);
            }
        }
        int isSorted(){
            for(int i=0; i<length-1; i++){
                if(A[i]>A[i+1]){
                    return 0;
                }
            }
            return 1;
        }
        void

};


int main(){
    Array arr = Array(10);
    arr.append(5);
    arr.append(6);
    arr.append(7);
    arr.append(13);
    arr.append(14);
    arr.append(156);
    arr.display();
    cout<<arr.linearSearch(7)<<endl;
    cout<<arr.binarySearch(6)<<endl;
    cout<<arr.min()<<endl;
    cout<<arr.max()<<endl;
    cout<<arr.sum()<<endl;
    cout<<arr.average()<<endl;
    cout<<arr.isSorted()<<endl;
    return 0;
}