#include<iostream>
using namespace std;
int isodd(int num){
    if(num%2==0)
        return 0;
    else
        return 1;
    
}
int main(void){
    for(int i=1;i<=10;i++){
        if(isodd(i))
            cout<<i+1<<" ";
        else
            cout<<i-1<<" ";
    }
    return 0;
}