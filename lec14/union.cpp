#include<iostream>
using namespace std;

union aman
{
    int age;
    float salery;
};

int main(){
    union aman ap;
    ap.age=1;

    
    cout<<ap.salery;
}




