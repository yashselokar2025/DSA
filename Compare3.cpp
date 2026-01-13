#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers to compare: ";
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"The Largest number is:"<<a;
    }
    else if(b>=a && b>=c){
        cout<<" the largest number is "<<b;
    }
    else{
        cout<<" the largest number is"<<c;
    }
}