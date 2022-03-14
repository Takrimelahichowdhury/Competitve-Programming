#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
{


        cin>>n;
        long long int a[n];
        for(long long int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<(long long)a[n-2]*a[n-1]<<endl;

}











}
