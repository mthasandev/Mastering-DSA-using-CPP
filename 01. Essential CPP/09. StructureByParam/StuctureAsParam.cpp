#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
int areaByValue(struct Rectangle r){//pass by value
    return r.length * r.breadth;
}

int areaByAddress(struct Rectangle *r){
    return r->length*r->breadth;
}

struct Rectangle * createRectangleStructure(int length, int breadth){
    struct Rectangle *p;
    // p = (Rectangle *)malloc(sizeof(struct Rectangle)); // c-style
    p = new Rectangle;
    p->length=length;
    p->breadth=breadth;

    return p;
}

int main(){
    struct Rectangle r={10,5};
    // int area = areaByValue(r);
    int area = areaByAddress(&r);
    cout << "Total area: " << area << endl;
    
    struct Rectangle *ptr = createRectangleStructure(5, 10);
    cout<<"Length: "<<ptr->length<<" Breadth: "<<ptr->breadth<<endl;
    return 0;
}