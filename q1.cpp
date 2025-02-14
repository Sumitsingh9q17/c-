#include<iostream>
using namespace std;

int main(){
    int num=0;
    do{
        cout<<"Enter a number: ";
        cin>>num;
        if(num<0){
            cout<<"You entered a negative number thank you"<<endl;
            break;
        }
    }while(true);
}