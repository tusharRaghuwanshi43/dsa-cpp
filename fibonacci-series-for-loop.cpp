#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter value of n "<<endl;
    cin>>n;

    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
        int nextnumber=a+b;
        a=b;
        b=nextnumber;
        cout<<nextnumber<<" ";
    }

    return 0;
}