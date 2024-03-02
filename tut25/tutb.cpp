#include<iostream>
using namespace std;
 //pasing object as function//

class complex{
       //obj

       int a;
       int b;

       public:
    void setdata(int x,int y){
    a=x;
    b=y;
    }
    void setdatasum(complex c1,complex c2){
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }
    void prntdata(){
        cout<<"data is"<<a<<"+"<<b<<endl;



    }

};
int main(){
    complex c1,c2;
    c1.setdata(2,4);
  
    
    c1.prntdata();

}