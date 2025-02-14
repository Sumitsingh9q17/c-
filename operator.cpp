#include <iostream>
using namespace std;
int main(){
    int a=5;
    int b=6;
    int c= a+b;
    cout<<"Sum is: "<<c<<endl;
    int d = a-b;
    cout<<"Sub is: "<<d<<endl;
    int e = a*b;
    cout<<"Mul is: "<<e<<endl;
    int f = a/b;
    cout<<"Div is: "<<f<<endl;
    int g = a%b;
    cout<<"Mod is: "<<g<<endl;


    //relational operator
    cout<<"Relational operator"<<endl;
    cout<<"a is: "<<a<<endl;
    cout<<"b is: "<<b<<endl;
    cout<<"a==b is: "<<(a==b)<<endl;
    cout<<"a!=b is: "<<(a!=b)<<endl;
    cout<<"a>b is: "<<(a>b)<<endl;
    cout<<"a<b is: "<<(a<b)<<endl;
    cout<<"a>=b is: "<<(a>=b)<<endl;
    cout<<"a<=b is: "<<(a<=b)<<endl;


    //logical operator
    cout<<"Logical operator"<<endl;
    cout<<"a is: "<<a<<endl;
    cout<<"b is: "<<b<<endl;
    cout<<"a==b && a>b is: "<<(a==b && a>b)<<endl;
    cout<<"a==b || a>b is: "<<(a==b || a>b)<<endl;
    cout<<"!(a==b) is: "<<!(a==b)<<endl;

    int ab=17;
    if(ab>=0 && ab<=100){
        cout<<"ab is in range"<<endl;
    }
    else{
        cout<<"ab is not in range"<<endl;
    }
bool driven = false;
if(!driven){
    cout<<"You can't drive"<<endl;
}
else{
    cout<<"You can drive"<<endl;
}
        return 0;
    }