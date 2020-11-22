#include<iostream>
using namespace std;
int main(void){
   int arr[100],i,largest,slargest,n;
   cout<<"enter the size of the array: "<<endl;
   cin>>n;
   cout<<"enter the elements of the array: "<<endl;
   for(i=0;i<n;i++){
      cin>>arr[i];
   }
   for(i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   if(arr[0]>arr[1]){
       largest=arr[0];
       slargest=arr[1];
      }
   else if(arr[1]>arr[0]){
      largest=arr[1];
      slargest=arr[0];
      }
   for(i=2;i<n;i++){
       if( arr[i]>largest){
       slargest=largest;
       largest=arr[i];
       }
       else if(arr[i]>slargest)
         slargest=arr[i];
   }
   cout<<"the second largest element of the array is: "<<slargest<<endl;
   return 0;
}