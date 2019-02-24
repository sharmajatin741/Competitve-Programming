#include <bits/stdc++.h> 

#define ll long long int

using namespace std;

int main()

{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    ll b1=-1,b2=-1;
    ll m[11]={0};
    ll w[11]={0};
    for(ll i=0;i<n;i++)
    { 
        cin>>a[i];
        m[a[i]]++;
            if(a[i]>b1)
            b1=a[i];
    }
    for(ll i=0;i<n;i++)
    { 
        cin>>b[i];
        w[b[i]]++;
            if(b[i]>b2)
            b2=b[i];
    }
    ll i,j;
    i=b1;
    j=b2;
    //cout<<i<<j;
    ll sum=0;
    while(1)
    {
        if(i==-1||j==-1)
        {
            break;
        }
        if(m[i]==w[j])
        {
            sum+=m[i]*i*j;
            m[i]=0;
            w[j]=0;
            i--;
            j--;
        }
        else if(m[i]<w[j])
        {
            sum+=m[i]*i*j;
            w[j]=w[j]-m[i];
            i--;
        }
        else {
            sum+=w[j]*i*j;
            m[i]=m[i]-w[j];
            j--;
        }
    }
    cout<<sum<<"\n";
    
}
return 0;

}