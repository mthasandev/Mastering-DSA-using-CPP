#include<iostream>

using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        //constructor
        Rectangle(){
            length=0;
            breadth=0;
        }
        Rectangle(int length, int breadth){
            this->length = length;
            this->breadth = breadth;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
        int getLength(){
            return length;
        } 
        int getBreadth(){
            return breadth;
        }
        void setLength(int length){
            this->length = length;
        } 
        void setBreadth(int breadth){
            this->breadth = breadth;
        }
        //destructor
        ~Rectangle(){
            cout<<"Object deleted with value: "<<length <<" and "<<breadth<<endl;
        }
     
};

int main(){
    {
        Rectangle r1;
    r1.setLength(3);
    r1.setBreadth(10);
    cout<<"Length: "<<r1.getLength()<<
    " Breadth:  "<<r1.getBreadth()<<
    " Area: "<< r1.area() << endl; 
    }
    {
    Rectangle r2(5, 8);
    cout<<"Length: "<<r2.getLength()<<
    " Breadth:  "<<r2.getBreadth()<<
    " Area: "<< r2.area() << endl;
    }
    return 0;
}