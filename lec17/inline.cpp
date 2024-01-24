#include<iostream>
using namespace std;

 inline int product(int a,int b){
    return (a*b);
}



int main(){

    int a,b;

    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;

    cout<<product(a,b);
    cout<<product(a,b);
    cout<<product(a,b);
    cout<<product(a,b);
    return 0;

}

// it use to reduce line of call of function.
// it is not command it is request.