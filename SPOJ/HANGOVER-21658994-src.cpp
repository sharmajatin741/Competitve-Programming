#include <bits/stdc++.h> 

#define ll long long int

using namespace std;

int main()

{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
float n;
while(cin>>n)
{
    if(n==0.00)
    break;
    float k=0.00;
    for(ll i=2;;i++)
    {
         k+=(float)1/i;
         if(k>=n)
         {
             cout<<i-1<<" card(s)\n";
             break;
         }
    }
}

return 0;

}
