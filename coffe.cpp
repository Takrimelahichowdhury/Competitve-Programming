#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    int b=0;
    for(int i=0;i<6;i++){
        if(a[2]==a[3] && a[4]==a[5])
            b++;
    }if(b>0){
        cout<<"Yes"<<endl;
    }else{
       cout<<"No"<<endl;
    }

}
