// SELECTION SORT -> WE FIND MINIMUM ELE.OF AN ARRAY AND SWAP THEM WITH ARRAY'FIRST ELE/INDEX
// ARRAY-> 3,2,4,1,5

// find the minimum ele.

// #include<iostream>
// #include<climits>
// using namespace std;
//  int main()
//  {
//     int n=5;
//    int arr[]={3,2,4,1,5};
//    for(int i=0; i<n; i++)
//    {
//     cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    // find minimum ele.

//    for(int i=0; i<n; i++)
//    {
//     int min=INT_MAX;
//     for(int j=0; j<n; j++)
//     {
//        if(arr[j]<min)   
//      min=arr[j];

//     }
//     cout<<min;
//     break;
//    }
//  }





// this is the code 
// #include<iostream>
// #include<climits>
// using namespace std;
//  int main()
//  {
//     int n=5;
//    int arr[]={3,2,4,1,5};
//    for(int i=0; i<n; i++)
//    {
//     cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//    // find minimum ele.

//    for(int i=0; i<n; i++)
//    {
//     int min=INT_MAX;
//     int minindex=-1;
//     for(int j=i; j<n; j++)
//     {
//        if(arr[j]<min)   
//        {
//      min=arr[j];
//      minindex=j;
       
//     }
//    }
//   swap(arr[i],arr[minindex]);
//    }
//     for(int i=0; i<n; i++)
//    {
//     cout<<arr[i]<<" ";
//    }
//  }

// 3 2 4 1 5 
// 1 2 3 4 5 