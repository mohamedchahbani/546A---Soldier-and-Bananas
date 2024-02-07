#include<bits/stdc++.h>
using namespace std ;

int main(){
    int s=0,i=1,k,n,w;
    
    cin >>k>>w>>n;
    for ( i = 1; i <= n; i++)
    {
        s=s+i*k;
    }
    s=s-w;
    if (s>0)
    {
        cout<<s;
    }else
    {
        cout<<0;
    }
    
    
    
    return 0;
}