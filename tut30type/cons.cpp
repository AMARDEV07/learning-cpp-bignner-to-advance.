#include<iostream>
using namespace std;


class complex {
    private:
    int age;
    
    public:
    complex(int);
       int printno(){
        cout<<age;

       }
    

    };
   

  

 


complex::complex(int a)
{
   age= a;
  
}

int main(){

    complex obj(5);
    obj.printno();

    complex obj1(10);
    obj1.printno();
    return 0;
   
    
   

}