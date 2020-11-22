#include <iostream>
#include<string.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int day;
    string name[5]={"anurag","anusmita","Anuradha","atig","amit"};
    string name2[8]={"tritiya","choturthi","ponchomi","sosthi","soptomi","ostomi","nobomi","bijoya"};
     cout<<"enter the date\n";
    cin>>day;
    if(day==19){
      for(int i=0;i<5;i++)
      cout<<"subho "<<name2[0]<<" "<<name[i]<<endl;
      }
     if(day==20){
      for(int i=0;i<5;i++)
      cout<<"subho "<<name2[1]<<" "<<name[i]<<endl;
      }
      if(day==21){
      for(int i=0;i<5;i++)
      cout<<"subho "<<name2[2]<<" "<<name[i]<<endl;
      }
       if(day==22){
      for(int i=0;i<5;i++)
      cout<<"subho "<<name2[3]<<" "<<name[i]<<endl;
      }
       if(day==23){
      for(int i=0;i<5;i++)
      cout<<"subho "<<name2[4]<<" "<<name[i]<<endl;
      }
       if(day==24){
      for(int i=0;i<5;i++)
      cout<<"subho "<<name2[5]<<" "<<name[i]<<endl;
      }
       if(day==25){
      for(int i=0;i<5;i++)
      cout<<"subho "<<name2[6]<<" "<<name[i]<<endl;
      }
       if(day==26){
      for(int i=0;i<5;i++)
      cout<<"subho "<<name2[7]<<" "<<name[i]<<endl;
      }
       if(day==27){
      for(int i=0;i<5;i++)
      cout<<"subho "<<name2[8]<<" "<<name[i]<<endl;
      }
      
    return 0;
}