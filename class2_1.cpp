/* #include <stdio.h>
int main()
{
   int array[100], position, c, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);

   if (position >= n+1)
      printf("Deletion not possible.\n");
   else
   {
      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Resultant array:\n");

      for (c = 0; c < n - 1; c++)
         printf("%d\n", array[c]);
   }

   return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
   int arr[100],pos,i,n;
   cout<<"enter the size of the array: "<<endl;
   cin>>n;
   cout<<"enter the elments of the array: "<<endl;
   for(i=0;i<n;i++){
      cin>>arr[i];
   }
   cout<<"enter the position where you wish to delete the element: "<<endl;
   cin>>pos;
   for(i=pos;i<=n;i++)
      arr[i]=arr[i+1];
   cout<<"the resultent array is: ";
   for(i=0;i<n-1;i++){
      cout<<arr[i]<<endl;
      }
   return 0;
   } 