#include <bits/stdc++.h> 

#define ll long long int

using namespace std;

int main()

{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);

while(1)
{
    ll a,b;
    cin>>a>>b;
    if(a==-1&&b==-1)
    break;
    
    ll mi=min(a,b);
    ll ma=max(a,b);
    if(ma%(mi+1)==0)
    {
        cout<<ma/(mi+1)<<"\n";
        
    }
    else {
        
        cout<<(ma/(mi+1))+1<<"\n";
    }
    
    
}

return 0;

}