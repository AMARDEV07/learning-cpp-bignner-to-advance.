#include<iostream>
using namespace std;
 void swapPointer(int &a,int &b){
    int temp=a;
   a=b;
   b=temp;

}

int main(){
    int a=5;
    int b=9;
     swapPointer(a,b);
    cout<<"swap no a"<<a<<"swap no b"<<b;
    return 0;

}