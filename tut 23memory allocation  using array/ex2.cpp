#include<iostream>
using namespace std;

class school{
    int fess[100];
    int salery[100];
    int counter;
    
    
    public:
    void initcounter(){
        counter=0;
    }
    void setsalery();
    void displaysalery();
    };


    void school::setsalery(){
        cout<<"enter the fess"<<counter+1<<endl;
        cin>>fess[counter];

         cout<<"enter the salery"<<endl;
         cin>>salery[counter];
           counter ++;

    }




    void school::displaysalery(){
        for(int i=0;i<counter;i++){
            cout<<"the fess is"<<fess[i]<<"salery is"<<salery[i]<<endl;

        }
    }




int main(){
    school obj;
    obj.initcounter();
   
    obj.setsalery() ;
    obj.displaysalery();
}