#include<iostream>

using namespace std;

template<class T>
class Arithmetic01 {
    private:
     T a;
     T b;
    public:
        Arithmetic01(T a, T b){
            this->a = a;
            this->b = b;
        }
        T add(){
            return a+b;
        }
        T sub(){
            return a-b;
        }
};


//using scope resolution operator

template<class T>
class Arithmetic02 {
    private:
     T a;
     T b;
    public:
        Arithmetic02(T a, T b);
        T add();
        T sub();
};
template<class T>
Arithmetic02<T>::Arithmetic02(T a, T b){
    this->a = a;
    this->b = b;
}
template<class T>
T Arithmetic02<T>::add(){
 return a+b;
}
template<class T>
T Arithmetic02<T>::sub(){
 return a-b;
}
int main(){
    Arithmetic01<float> a1(5.8, 2.5);
    cout<<"Addition: "<<a1.add()<<endl;
    cout<<"Substraction: "<<a1.sub()<<endl;
    Arithmetic02<float> a2(6.5, 2.4);
    cout<<"Addition: "<<a2.add()<<endl;
    cout<<"Substraction: "<<a2.sub()<<endl;
    Arithmetic02<float> a3(10, 4);
    cout<<"Addition: "<<a3.add()<<endl;
    cout<<"Substraction: "<<a3.sub()<<endl;
    return 0;
}