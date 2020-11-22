#include <iostream>
using namespace std;
int main(void)
{
    int sumofeven = 0, sumofodd = 0;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
            sumofeven = sumofeven + arr[i];
        else
            sumofodd = sumofodd + arr[i];
    }
    cout << "the sum of even number is: " << sumofeven << endl;
    cout << "the sum of odd number is: " << sumofodd;
    return 0;
}