#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements : ";

    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    for(int i=0 ; i<n ; i++)
    {
       for(int j=i ; j<n ; j++)
       {
           for(int k=i ; k<=j ; k++)
           {
               cout<<a[k]<<" ";
           }
           cout<<endl;
       }
       cout<<endl;
    }
    return 0;
}