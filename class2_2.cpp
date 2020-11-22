/*#include <stdio.h>
 
int main()
{
   int array[100], position, c, n, value;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
 
   array[position-1] = value;
 
   printf("Resultant array is\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
 
   return 0;
}
*/
#include <iostream>
using namespace std;
int main(void)
{
   int arr[100], pos, val, i, n;
   cout << "enter the size of the array: " << endl;
   cin >> n;
   cout << "enter the elements of the array: " << endl;
   for (i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   cout << "enter the position where you insert the element: " << endl;
   cin >> pos;
   cout << "enter the value that you want to insert: " << endl;
   cin >> val;
   for (i = n - 1; i >= pos-1; i--)
   {
      arr[i + 1] = arr[i];
   }
   arr[pos-1] = val;
   cout << "the new array is: ";
   for (i = 0; i < n + 1; i++)
      cout << arr[i] << endl;
   return 0;
}