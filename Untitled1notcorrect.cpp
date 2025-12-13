#include<stdio.h>
int main(){
    int a,i,r;
    printf("Enter a number");
    scanf("%d",&a);
    for( i=0;a>0;i++)
    {
        r=a%10;
        a=a/10;

        
    }
            printf("%d",r);
    return 0;
}
