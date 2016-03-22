#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100];
    int n,temp,num,k;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>ar[i];
    for(int i=0; i<n; i++)
    {
        int minn=INT_MAX;
        for(int j=i; j<n; j++)
        {
            if(ar[j]<minn)
            {
                minn=ar[j];
                k=j;
            }
        }
        temp=ar[i];
        ar[k]=temp;
        ar[i]=minn;
    }

    for(int i=0; i<n; i++)
        cout<<ar[i]<<" ";
    cout<<endl;
}
