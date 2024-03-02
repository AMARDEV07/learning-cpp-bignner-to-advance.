#include<iostream>
using namespace std;


class emp{
       //obj

       int salery;
       int id;


       public:

       //function for acces private obj
       void setid(){
        //we can set salery/
          salery=122;
          cout<<"create emp id"<<endl;

          cin>>id;
       }
       void getid(){
        cout<<"emp id is"<<id<<endl;
        

       }  
};
int main(){
    // emp aman, harry ;
    // aman.setid();
    // aman.getid();   it is for data is small when data is large
    // then use this


    emp acc[5];//array object;
   //using loop for acces data 

   for(int i=0;i<4;i++){
    acc[i].setid();
    acc[i].getid();//for large data;
   }
    return 0;
} 