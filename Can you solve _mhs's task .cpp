/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,d,n,c=0;
     cin>>n>>d;
     for(i=1;i<=n;i++){
         long long int x=log10(i)+1;
         t=i;
         while(t){
               if((t%10)==d){
                        // cout<<t<<endl;
                    c++;
               }
          t=t/10;
         }
     }
     cout<<c<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




