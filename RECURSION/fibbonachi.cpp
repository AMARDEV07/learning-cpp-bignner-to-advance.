#include<iostream>
using namespace std;
int fib(int n){
    if(n==0){
        return 0;

    }
    if(n==1){
        return 1;
        int ans=fib(n-1)+fib(n-2);

    }
}

int main(){

    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<"fibonnachi ans"<<fib(n)<<endl;
    

return 0;
}