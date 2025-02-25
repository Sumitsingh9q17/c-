#include <iostream>
using namespace std;

int maximum_number(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }

}

int minimum_number(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }

}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<maximum_number(a,b);
    cout<<minimum_number(a,b);
    return 0;
}