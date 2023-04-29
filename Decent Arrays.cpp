/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>n;
     vector<long long int >a;
     for(i=0;i<n;i++){
          cin>>t;
          a.push_back(t);
     }
     if(is_sorted(a.begin(),a.end())){
          cout<<"Yes\n";
     }
     else{
          cout<<"No\n";
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




