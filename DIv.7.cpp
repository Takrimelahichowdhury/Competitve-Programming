#include<bits\stdc++.h>
using namespace std;
int main()
{

    int n,x;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        while(x%7!=0)
        {
            x++;
        }
        printf("%d",x);

    }

    return 0;

}
