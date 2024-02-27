 #include<iostream>
 using namespace std;
 
   void reverse(string& str,int start,int end){

    cout<<"call"<<str<<endl;//it is only show how reverse .



    if(start>end)
    return ;


    swap(str[start],str[end]);
    start++;
    end--;


    reverse(str,start,end);

    }
    int main(){
    string name ="aman";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;
    return 0;
 }