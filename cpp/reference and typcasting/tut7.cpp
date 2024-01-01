#include<iostream>
using namespace std;


int a=44;
int main(){
    int b=2;
    int c=5;


    cout<<"enter no b"<<endl;
    cout<<"enter no c"<<endl;
    cin>>b;
    cin>>c;

    cout<<"sum is "<<b+c+::a;
    cout<<"global opertatot"<<::a;



}

