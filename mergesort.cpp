#include<bits/stdc++.h>
using namespace std;
    int ar[1000010];

int merg(int ar[],int l,int m,int h)
{
    int temp1[m-l+1];
    int temp2[h-m];
    for(int i=0; i<=m-l; i++)
        temp1[i]=ar[l+i];
    for(int i=0; i<h-m; i++)
        temp2[i]=ar[m+1+i];
    int i=0,j=0,fu=l;
    while((i<=m-l)&&(j<=h-m-1))
    {
        if(temp1[i]<=temp2[j])
        {
            ar[fu]=temp1[i];
            fu++;
            i++;
        }
        else
        {
            ar[fu]=temp2[j];
            fu++;
            j++;
        }
    }
    while(i<=m-l)
    {
        ar[fu]=temp1[i];
        i++;
        fu++;
    }
    while(j<=h-m-1)
    {
        ar[fu]=temp2[j];
        j++;
        fu++;
    }

}
int mergesort(int ar[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        mergesort(ar,l,mid);
        mergesort(ar,mid+1,h);
        merg(ar,l,mid,h);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        scanf("%d",&ar[i]);
    mergesort(ar,0,n-1);
    for(int i=0; i<n; i++)
        printf("%d\n",ar[i]);
}
