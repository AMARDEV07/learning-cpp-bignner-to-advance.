#include<iostream>
using namespace std;



class school{
    int student;
    int age;
    static int objcount;



    public:



void  getage(){
    cout<<"enter age";
      cin>>age;
      objcount ++;
}

void showage(){
    cout<<"age of studnet is"<<age<<"studnet no"<<objcount<<endl;
   

}
static void getcount(){
        cout<<"the value of count is"<<objcount<<endl;
    }
};




 int school::objcount;


 int main(){
    school baccha;
    baccha.getage();
    baccha.showage();
    school baccha2;
    baccha2.getage();
    baccha2.showage();
    baccha2.getage();
    
    school baccha3;
    baccha3.getage();
    baccha3.showage();

 }

