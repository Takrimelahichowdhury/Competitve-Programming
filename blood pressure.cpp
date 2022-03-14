#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=1; s[i]!='\0'; i++)
    {
        if(s[i]=='9')
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
