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
     long long int t,i,n,q,b;
     vector<long long int> a;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>t;
          a.push_back(t);
     }
     cin>>q;
     while(q--){
          cin>>b;
           long long int x=lower_bound(a.begin(),a.end(),b)-a.begin();
           long long int y=upper_bound(a.begin(),a.end(),b)-a.begin();
           cout<<x<<" "<<y<<endl;

     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



