

#include <iostream>
using namespace std;
int main()
{
     int n;
     
     cout<<"Enter number of elements: "<<endl;
     cin>>n;
     
     int arr[n];
     int smallest = arr[0];
     cout<<"Enter elements: "<<endl; 
     for(int i=0; i<n; i++) {
     cin>>arr[i];
     }
     
     for(int i=0; i<n; i++){
         if (arr[i] < smallest) {
             smallest = arr[i];
         }
     }
     
     cout<<"smallest number: "<<smallest<<endl;
    return 0;
}

// OUTPUT
// Enter number of elements: 3
// Enter elements: 34 56 78
// smallest number: 34









