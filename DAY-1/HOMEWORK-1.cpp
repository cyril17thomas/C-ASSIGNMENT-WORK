#include<iostream>
using namespace std;
//checking if the character is upper case,lower case,numeric value or special character

int main(){
    char ch;
    cout<<"enter the character "<<endl;
    cin>>ch;
    if(ch>='A'&& ch<='Z'){
        cout<<"upper case letter"<<endl;
    }else if(ch>='a'&& ch<='z'){
        cout<<"lower case letter"<<endl;
    }else if(ch>='0'&& ch<='9'){
        cout<<"numeric value"<<endl;
    }else{
        cout<<"it is a special character"<<endl;
    }
}