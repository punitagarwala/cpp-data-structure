#include <iostream>
using namespace std;
int main(void)
{
    int arr[8] = {1, 2, 3, 4, 5, 4,0,-5};
    int greater = arr[0], smaller = arr[0];
    for (int i = 0; i < 8; i++)
    {
        if (greater < arr[i])
            greater = arr[i];
        if (smaller > arr[i])
            smaller = arr[i];
    }
    cout << "the greatest number is: " << greater << endl;
    cout << "the smallets number is: " << smaller;
    return 0;
}