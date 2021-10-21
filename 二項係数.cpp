struct COM
{
  ll fac[10000001],inv[10000001],facinv[10000001];
  ll tMOD;
  void cominit(ll max,ll mod)//O(n)
  {
    tMOD=mod;
    fac[0]=1;fac[1]=1;inv[1]=1;facinv[0]=1;facinv[1]=1;
    for(int i=2;i<=max;i++)
    {
      fac[i]=(fac[i-1]*i)%tMOD;
      inv[i]=tMOD-inv[tMOD%i]*(tMOD/i)%tMOD;
      facinv[i]=facinv[i-1]*inv[i]%tMOD;
    }
  }
  ll com(ll n,ll k){return fac[n]*(facinv[k]*facinv[n-k]%tMOD)%tMOD;}
  ll nCr(ll n,ll r){ll ans=1;r=min(n-r,r);Rep(i,1,r+1)ans*=n-i+1,ans/=i;return ans;}// O(min(n-r,r))
  ll nCrmod(ll n,ll r,ll mod)
  {
    modint::set_mod(mod);modint ans=1;
    r=min(n-r,r);Rep(i,1,r+1)ans*=n-i+1,ans/=i;
    return ans.val();
  }
};
