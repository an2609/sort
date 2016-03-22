#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int key=ar[i];
        while(j>=0&&ar[j]>key)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=key;
    }
    for(int i=0;i<n;i++)
        cout<<ar[i]<<" ";
}
