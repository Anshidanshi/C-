#include <iostream>
using namespace std;

int add(int i,int j){
//function with argument with return value
    return i+j;
}
int sub(int i,int j){
//function with argument without return value
    cout<<i-j;
}
int mul(){
//function without argument with return value
    int c,d;
    cout<<"enter the numbers";
    cin>>c>>d;
    return c*d;
}
int div(){
//function without argument without return value
    int f,g;
    cout<<"enter the numbers";
    cin>>f>>g;
    cout<<f/g;
    
}
int main(){
    int a,b,su,op;
    cout<<"which opration you want";
    cin>>op;
    
    
    if (op==1)
    {
        cout<<"enter the numbers";
        cin>>a>>b;
        su=add(a,b);
        cout<<su;
    }
    else if (op==2)
    {
        cout<<"enter the numbers";
        cin>>a>>b;
        sub(a,b);
        
    }
    else if(op==3)
    {
        su=mul();
        cout<<su;
    }
    else if (op==4)
    {
        div();
        
    }
    else
    {
        cout<<"invlaid option";
        
    }
    
    
    
}