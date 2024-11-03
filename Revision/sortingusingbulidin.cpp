// ****************  Sort the array using build-in sort  *************


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int arr[]={-1,-8,0,5,-9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     // sort the array

//     sort(arr,arr+n);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }






// ****************  Sort the vector using build-in sort  *************



// #include <iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of the vector "<<endl;
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Enter the elements ";
//     for(int i=0; i<n; i++)
//     {
//         cin>>v[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;


//     // sort the vector
//     sort(v.begin(),v.end());
//     for(int i=0; i<n; i++)
//     {
//         cout<<v[i]<<" ";
//     }

// }






// ******************   push array'elements into vector   ***************




#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={-1,-8,0,5,-9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int>v(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }

}

