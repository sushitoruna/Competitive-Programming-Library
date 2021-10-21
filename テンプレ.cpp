#include <bits/stdc++.h>
#include <atcoder/all>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using Bint = mp::cpp_int;
using namespace std;using namespace atcoder;
using ll=long long;using vl=vector<ll>;
using vi=vector<int>;using vs=vector<string>;using vc=vector<char>;
using vvl=vector<vl>;using pl=pair<ll,ll>;using vvc=vector<vc>;
using vd=vector<double>;using vpl=vector<pl>;using vb=vector<bool>;
#define fi first
#define se second
#define rep(i,r) for(ll i=0;i<(r);i++)
#define Rep(i,l,r) for(ll i=(l);i<(r);i++)
#define print(n) cout<<(n)<<endl
#define prints(n) cout<<fixed<<setprecision(15)<<(n)<<endl
#define all(a)  (a).begin(),(a).end()
#define sortp(d) sort(all(d))
#define sortm(d) sort(d.rbegin(),d.rend())
//cout<<fixed<<setprecision(15)<<
//priority_queue<pl,vpl,greater<pl>>
void yn(bool b){print(b?"Yes":"No");exit(0);}
ll gcd(ll a,ll b) {if(b==0)return a;else return gcd(b,a%b);}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
ll INF=(ll)1e18*9,MOD=1000000007;
ll dx[8]={1,0,-1,0,1,-1,-1,1},dy[8]={0,1,0,-1,1,1,-1,-1};

int main()
{
  
}