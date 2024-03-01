#include<iostream>
using namespace std;


class emp{
    int id;
    static int count;

    public:
    void setdata(){

        cout<<"enter the id"<<endl;
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"thr id of emp is"<<id<<"this is emp no"<<count<<endl;

    }
    static void getcount(){
        cout<<"the value of count is"<<count<<endl;
    }
};

int emp::count;


int main(){

    emp aman;

    aman.setdata();
    aman.getdata();
    emp::getcount();
    

emp vikas;

    aman.setdata();
    aman.getdata();
    emp::getcount();


emp zoeo;

    aman.setdata();
    aman.getdata();
    emp::getcount();//static fution//

    return 0;
}
