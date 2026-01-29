#include<iostream>
using namespace std;
int main(){
    int i;
    for(i =0;i<11;i++)
    {   
        if(i % 2 == 0 || i == 0 || i == 1)
        {
            cout<<"Its not a prime number"<<i;
            continue;
        }
        else
        {
            cout<<"Its a prime number "<<i;
            break;
        }
        }
    }