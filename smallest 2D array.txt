

#include <iostream>
using namespace std;
int main()
{
     int n,m;
     
     cout<<"Enter number of rows: "<<endl;
     cin>>n;
     
     cout<<"Enter number of colums: "<<endl;
     cin>>m;
     
     int arr[n][m];
     int smallest = arr[3][3];
     cout<<"Enter elements: "<<endl; 
     for(int i=0; i<m; i++) {
         for(int j=0; j<n; j++) {
     cin>>arr[i][j];
     }
     }
     
     for(int i=0; i<n; i++){
         for(int j=0; j<m; j++) {
         if (arr[i][j] < smallest) {
             smallest = arr[i][j];
         }
     }
     }
     
     cout<<"smallest number: "<<smallest<<endl;
    return 0;
}

OUTPUT
Enter number of rows: 3
Enter number of columns: 3
Enter elements: 
1 2 3
4 5 6
7 8 9
Smallest number: 1









