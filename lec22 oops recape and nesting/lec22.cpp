#include<iostream>
using namespace std;



class a{
    public:


    class b{
        int a,b;

        public:
        void  input(){
            cout<<"enter value ";
            cin>>a>>b;
            

        }
        void show (){
            
            cout<<a+b;

        }

        
    };
};

int main(){
    a::b obj;
    obj.input();
    obj.show();
}