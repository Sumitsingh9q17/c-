//switch case

#include <iostream>

using namespace std;

int main(){
    // int num=2;
    // switch(num){
    //     case 1:
    //         cout<<"Number is 1"<<endl;
    //         break;
    //     case 2:
    //         cout<<"Number is 2"<<endl;
    //         break;
    //     case 3:
    //         cout<<"Number is 3"<<endl;
    //         break;
    //     default:
    //         cout<<"Number is not 1, 2 or 3"<<endl;
    // }

    int day;
    cout<<"Enter day number: ";
    cin>>day;

    switch(day){
        case 1:
            cout<<"Monday"<<endl;
            break;
        case 2:
            cout<<"Tuesday"<<endl;
            break;
        case 3:
            cout<<"Wednesday"<<endl;
            break;
        case 4:
            cout<<"Thursday"<<endl;
            break;
        case 5:
            cout<<"Friday"<<endl;
            break;
        case 6:
            cout<<"Saturday"<<endl;
            break;
        case 7:
            cout<<"Sunday"<<endl;
            break;
        default:
            cout<<"Invalid day number"<<endl;
    }
    return 0;
}