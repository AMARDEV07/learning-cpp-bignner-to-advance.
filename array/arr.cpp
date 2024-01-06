#include<iostream>
using namespace std;


int main(){
    int arr[]={2,6,8,4,6};
    cout<<arr<<endl;
    // address of arr arr[0]
    cout<<&arr[0];
    cout<<arr[0];
    cout<<*(arr+1);
}