#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1 = "this is first string";
    string s2("this is second string");
    string s3="Apple";
    string s4="Orange";

    cout<<s1<<"\n"<<s2<<"\n"<<endl;

    cout<<"getting a char of the string"<<endl;
    cout<<s1[3]<<endl;
    cout<<s1.at(3)<<endl;;

    cout<<"check empty"<<endl;
    cout<<s3.empty()<<endl;

    cout<<"length of string"<<endl;
    cout<<s2.length()<<endl;
    cout<<s2.size()<<endl;
    
    cout<<"check whether two strings are same"<<endl;
    cout<<(s1==s1)<<endl;
    cout<<(s1==s2)<<endl;

    cout<<"compare"<<endl;
    cout<<s3.compare(s4)<<endl;
    cout<<s4.compare(s3)<<endl;

    cout<<"Append"<<endl;
    s1.append(s2);
    cout<<s1<<endl;
    
    cout<<"remove character"<<endl;
    s1.erase(9);
    cout<<s1<<endl;

    cout<<"find character"<<endl;
    cout<<s1.find('i')<<endl;

    cout<<"replace"<<endl;
    s1.replace(0, 0, "this has to be replaced");
    cout<<s1<<endl;

    cout<<"Insert"<<endl;
    s1.insert(6, "inserted");
    cout<<s1<<endl;

    cout<<"Swap"<<endl;
    s3.swap(s4);
    cout<<s3<<endl;
    cout<<s4<<endl;
    return 0;
}