// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int count=0;
//     int target;
//     cin>>target;
// vector<int> vec = {1,2,3,4,5,6,7,8,9,1,3,4,5,6,7,1,5,2,8,3,7,6,9};

// for(int i:vec){
//     if(i==target){
//         count++;
//     }

// }
// cout<<count;
// return 0;
// }

//convert heeloworld into uppercase from lowercase using for each loop


#include<iostream>
#include<vector>
using namespace std;

int main(){
    string str="helloworld";
    for(char &c:str){
        c=toupper(c);
    }
    cout<<str;
    return 0;
}

//without using inbuilt function
