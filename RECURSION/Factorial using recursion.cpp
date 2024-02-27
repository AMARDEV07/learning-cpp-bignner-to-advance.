#include<iostream>
using namespace std;
int factriol(int n){//function
if(n==0){
    return 1;

}

return n*factriol(n-1);// firmuila
}






int main(){
    int n;
    cin>>n;

    int ans=factriol(n);//function
    cout<<ans<<endl;
}
