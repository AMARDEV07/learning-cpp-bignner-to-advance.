#include<iostream>
using namespace std;

class mam;// declaring class 
class aman{
    int money=10;
    friend void sam(mam,aman);//

};
class mam{
    int money=20;
    friend void sam(mam,aman);

};



void sam(mam r1,aman r2){//reference
    cout<<"sum"<<r1.money+r2.money;

}

int main(){
    aman obj1;mam obj2;
    sam(obj2,obj1);
}