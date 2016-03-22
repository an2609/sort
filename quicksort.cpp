#include<bits/stdc++.h>
using namespace std;
int ar[1000010];
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int part(int ar[],int l,int h)
{
    int i=l-1;
    int f=ar[h];
    for(int k=l;k<h;k++)
    {
        if(ar[k]<=f)
        {
            swap(&ar[k],&ar[i+1]);
            i++;
        }
    }
            swap(&ar[h],&ar[i+1]);
            return i+1;
}
void quicksort(int ar[],int l,int h)
{
    if(l<h)
    {
        int p=part(ar,l,h);
        quicksort(ar,l,p-1);
        quicksort(ar,p+1,h);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&ar[i]);
    quicksort(ar,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d\n",ar[i]);

}
