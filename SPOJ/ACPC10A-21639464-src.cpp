#include <bits/stdc++.h> 

#define ll long long int

using namespace std;

int main()

{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
ll a,b,c;
while(1)
{
    cin>>a>>b>>c;
    if(a==0&&b==0&&c==0)
    break;
    ll ap=b-a;
    if(b*b==a*c)
    {
     cout<<"GP "<<(c*c)/b;
    }
    else {
        cout<<"AP "<<c+ap;
    }
    
    cout<<"\n";
}

return 0;

}