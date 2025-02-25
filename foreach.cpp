

#include <iostream>
using namespace std;

 int arr[]={1,2,3,4,5,6,7,8,9,10};

int main(){
    for(int i:arr){
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
