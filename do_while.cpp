#include<iostream>

using namespace std;

int main(){
    int i=0;
    int sum=0;
    do{
        sum+=i;
        i++;
    }while(i<=5);
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}