//Variables
#include<iostream>
using namespace std;
int main(){
    //QUE: If you have the aadhar card and cast cert then you can apply for the bank exam
    //if you have the 12 th marksheet then you can can procceed for the process of reistration for exam
    //if you have 75 above in 12th then you are eligible for the exam        
    int t,c,m;
    float p;   
    cout<<"Enter the aadhar card availability if yes then enter 1 else 0: ";
    cin>>t;
    cout<<"Enter the caste certificate availability if yes then enter 1 else 0: ";
    cin>>c;
    if(t==1 && c==1){
        cout<<"You can apply for the bank exam";
        cout<<"Enter the 12th marksheet availability if yes then enter 1 or else 0: ";
        cin>>m;
        if(m==1){
            cout<<"You can proceed for the registration process";
            cout<<"Enter your 12th percentage: ";
            cin>>p;
            if(p>=75){
                cout<<"You are eligible for the exam";
            }
            else{
                cout<<"You are not eligible for the exam";
            }
        }
        else{
            cout<<"You cannot proceed for the registration process";
        }
    }
    else{
        cout<<"You cannot apply for the bank exam";
    }
    return 0;
}