#include <iostream>
using namespace std;

int main() {
  int m,n;
  cin>>m>>n;
  int arr1[m],arr2[n];
  cout<<"Enter the elements in the first array\n";
  for(int i=0;i<m;i++)
  {
    cin>>arr1[i];
  }
  cout<<"Enter the elements in the second array\n";
  for(int i=0;i<n;i++)
  {
    cin>>arr2[i];
  }
  int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            cout << arr1[i++] << " "; 
  
        else if (arr2[j] < arr1[i]) 
            cout << arr2[j++] << " "; 
  
        else { 
            cout << arr2[j++] << " "; 
            i++; 
        } 
    } 
  
    /* Print remaining elements of the larger array */
    while (i < m) 
        cout << arr1[i++] << " "; 
  
    while (j < n) 
        cout << arr2[j++] << " "; 
    return 0;
}
