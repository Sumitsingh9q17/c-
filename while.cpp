#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum=0;
while(true){
    sum+=num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0){
        break;
    }
}

}