#include<bits/stdc++.h>
#include<climits>
using namespace std;

int largest_subarray(int arr[],int size)
{
   int max_best=0,max_current=0;
   for(int i=0;i<size;i++)
   {
      max_current = max_current + arr[i];
      if(max_best < max_current)
        max_best = max_current;
      if(max_current < 0)
        max_current = 0;
   }
   return max_best;

}
int main()
{
  int arr[1000],size;
  cin>>size;
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  int max_sum=largest_subarray(arr,size);
  cout<<"Max subcontigious array:"<<max_sum;
  return 0;
}
