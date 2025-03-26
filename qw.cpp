#include<iostream>

using namespace std;

int main(){
    int l=0;
    int m=0;
    int h=2;

    int arr[]={2,1,0};
    while(m<=h){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
}