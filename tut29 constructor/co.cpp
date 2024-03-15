#include<iostream>
using namespace std;




class complex{
    int a,b;

    public:
    complex(void);// constuctor
    void printno(){
        cout<<a<<b<<endl;
    }


};
complex::complex(void){
    a=10;
    b=16;
}

int main(){
    complex obj;
    obj.printno();
        return 0;
}