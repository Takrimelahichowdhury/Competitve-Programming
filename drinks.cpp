#include<iostream>
using namespace std;
int main()
{

    int n;
    float sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);

        sum=sum+a[i];

    }


      float avg=(sum/n);

      printf("%f",sum/n);


      return 0;

}
