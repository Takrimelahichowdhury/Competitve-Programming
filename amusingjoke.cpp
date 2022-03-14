#include<bits\stdc++.h>
using namespace std;
int main(){

    string a;
    string b;
    string c;
    cin>>a;
    cin>>b;
    cin>>c;
    std::string s=a+b;
    sort(s.begin(),s.end());
    sort(c.begin(),c.end());
    if((s.compare(c))==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
