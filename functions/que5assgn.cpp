#include<iostream>
using namespace std;

char nextWord(char ch){
    if(ch == 'z'){
        return 'a';
    }
    else{
        return ch + 1;
    }
}

int main(){
    char ch;
    cout<<"enter a charac:";
    cin>>ch;
    char answer = nextWord(ch);
    cout<<answer;
    return 0;
}