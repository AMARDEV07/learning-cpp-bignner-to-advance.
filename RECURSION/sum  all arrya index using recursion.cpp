#include<iostream>
using namespace std;

int getsum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
    return arr[0];
    }
  int remaningpart=getsum(arr+1,size-1);
int sum=arr[0]+remaningpart;
return sum;
}

int main(){ 
    int size=5;
    int arr[5]={2,3,4,5,6};
    int sum=getsum(arr,size);
    cout<<"the sum is"<<sum<<endl;

return 0;
}
