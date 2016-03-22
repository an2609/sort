#include<bits/stdc++.h>
using namespace std;
int ar[1000010];
void printtree(int ar[],int ,int);
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int ar[],int l,int n)
{
    int k=2*l;
    if(k+1<=n)
    {
        if((ar[k]>ar[l])&&(ar[k]>ar[k+1]))
        {
            swap(&ar[k],&ar[l]);
            heapify(ar,k,n);
        }
        else if((ar[k+1]>ar[l])&&(ar[k+1]>=ar[k]))
        {
            swap(&ar[k+1],&ar[l]);
            heapify(ar,k+1,n);
        }
    }
    else
    {
        if(k<=n&&ar[k]>ar[l])
            swap(&ar[k],&ar[l]);
    }
}
void heap(int ar[],int n)
{
    for(int i=n/2;i>=1;i--)
    {
        heapify(ar,i,n);
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        scanf("%d",&ar[i]);
        heap(ar,n);
        swap(&ar[n],&ar[1]);
    for(int i=n-1;i>=1;i--)
    {
        heapify(ar,1,i);
        swap(&ar[1],&ar[i]);
    }
    for(int i=1;i<=n;i++)
    printf("%d\n",ar[i]);


}
