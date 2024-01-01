#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"1";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"0";
    }
    else{
        cout<<"-1";
    }
    return 0;

}
