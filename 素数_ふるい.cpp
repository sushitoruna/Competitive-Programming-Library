void sieve(vb&b,ll n)//0-indexed vb b(n+1,true)
{
  b[0]=false,b[1]=false;
  for(ll i=2;i*i<=n;i++)
  {if(b[i])for(ll j=2;i*j<=n;j++)b[i*j]=false;}
}