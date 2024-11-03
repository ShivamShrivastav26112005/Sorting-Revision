// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     // given array
//     int n=5; // array size
//     int arr[]={5,3,1,4,2};
//     // print given array
//     // we use for loop for printing the array (this is the method)
//     for(int i=0; i<=n-1; i++) // i<n or i<=n-1 index start from 0,1,2,3,4....
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // 1st find minimum ele. of this given array 
//      {
//            for(int i=0; i<=n-1; i++) {
//         int min=INT_MAX;
//         int mindex=-1;
//         // minimum ele calculation
//         for(int j=i; j<n; j++)
//         {
//             if(arr[j]<min)
//             {
//                 min = arr[j];
//                 mindex=j;
//             }
        
//         swap(arr[i], arr[mindex]);

//      }
// }
//  for(int i=0; i<=n-1; i++) 
//     {
//         cout<<arr[i]<<" ";
//     }
//      }
// }



// SELECTION SORT

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int n=5;
//     int arr[]={5,3,4,1,2};
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // min. ele.
//     for(int i=0; i<n-1; i++)
//     {
//         int min=INT_MAX;
//         int mindx=-1;
//         for(int j=i; j<n;j++)
//         {
//           if(arr[j]<min)
//           { 
//             min=arr[j];
//           mindx=j;
//           }
//         }
//         swap(arr[i],arr[mindx]);
//     }
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }




// sort -> 5 2 3 7 4 using selection sort
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[5]={5,2,3,7,4};
//     for(int i=0; i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0; i<5;i++)
//     {
//         int min=INT_MAX;
//         int mindex=2;
//         for(int j=i; j<5;j++)
//         {
//             if(arr[j]<min)
//             {
//                 min=arr[j];
//                 mindex=j;
//             }
//         }
//         swap(arr[i],arr[mindex]);
//     }
//      for(int i=0; i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }






// this is code is readable 
// please read this code


// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     // we take an array
//     int arr[5]={3,5,2,4,1};
//     // here we print an array 
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// cout<<endl;
//     // selection sort
//     // travel in given an array
//     for(int i=0; i<5; i++)
//     {
//     // first we find minimum ele. of the array
//     int min=INT_MAX; // we put maximum ele. in min
//     int minindex=-1; // here we put any value

//         // travel in the ele.
//         for(int j=i; j<5; j++)
//         {
//             if(arr[j]<min){
//            min= arr[j]; // we find the minimum ele.
//             minindex=j;
//             }
//         }
//              // also we find the index of min. ele.
//             swap(arr[i],arr[minindex]);
//     }
//          for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//         }





// FIND MINIMUM ELEMENETS
// #include<iostream>
// #include<climits>
// using namespace std; 
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // find the minimum ele. of the given array
//     int min=INT_MAX;
//      for(int i=0; i<5; i++){
//     if(arr[i]<min)
//     min=arr[i];
//      }
//       for(int i=0; i<5; i++)
//     {
//         cout<<min<<" ";
//         break;
//     }
// }










// #include<iostream>
// #include<climits>
// using namespace std; 
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // find the minimum ele. of the given array
//     int min=arr[0];
//     for(int i=0; i<5; i++)
//     {
//         if(arr[i]<min)
//         min=arr[i];
//     }
//     cout<<min;
// }



// FIND THE MAXIMUM ELEMENETS

// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[]={1,4,3,2,5};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     // maximum ele.
//     int max=INT_MIN;
//     {
//         for(int i=0; i<5; i++)
//     if(arr[i]>max)
//     max=arr[i];
// }
// cout<<max;
// }

//min ele.

// #include<iostream>
// #include<climits>
// using namespace std;
//  int main()
//  {
//     int arr[5]={1,4,3,2,5};
//     for(int i=0; i<5; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// cout<<endl;
//     int min=INT_MAX;
//     for(int i=0; i<5; i++)
//         if(arr[i]<min)
//         min=arr[i];
//         {
//         cout<<min;
//         }
//     }
 


// FINALLY CODE FOR SELECTION SORT




#include<iostream>
#include<climits>
using namespace std;
 int main()
 {
    int arr[5]={1,4,3,2,5};
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
cout<<endl;
for(int i=0; i<5; i++)
{
    int min=INT_MAX;
    int min_index=-1;
    for(int j=i; j<5; j++) // j is the index of min ele.

    {
        if(arr[j]<min)
        {
        min=arr[j];
        min_index=j;
    }
    }
    swap(arr[i], arr[min_index]);
}
// after swappping print
 for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
 }









