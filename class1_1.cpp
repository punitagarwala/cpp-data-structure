#include<iostream>
using namespace std;
int main(void)
{
    int a,b,c,sum=0;
    cout<<"enter the number: ";
    cin>>a;
    while(a>0){
    b=a%10;
    sum=sum+b;
    a=a/10;
    } 
    cout<<"sum of the 2 digits are: "<<sum;
    return 0;
}