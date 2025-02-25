//reverse the sentence using two pointer

#include <iostream>
using namespace std;
#include <string>

void reverse_sentence(string &sentence){
    int i=0;
    int j=sentence.length()-1;
    while(i<j){
        swap(sentence[i],sentence[j]);
        i++;
        j--;
    }
}

int main(){
    string sentence;
    getline(cin,sentence);
    reverse_sentence(sentence);
    cout<<sentence;
    return 0;
}