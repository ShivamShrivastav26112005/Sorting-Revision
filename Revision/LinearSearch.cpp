// array given -> 4,3,1,5,9,3,4,6,3,0
// search = 5
// by using linear search

// code is wrong ******************** try again 

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 3, 1, 5, 9, 3, 4, 6, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int search = 5;
    cout << "Before sarching " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == search)
        {
            return true;
        }                                                                                                                                                                                                                                                                                                                                                                                                                               
        else
        {
            return false;
        }
    }
}