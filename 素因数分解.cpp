void sobun(ll n/*any*/)
{
  for(ll div=2;div*div<=n;div++)
  {
    if(n%div!=0)continue;
    ll tmp=0;
    while(n%div==0)n/=div,tmp++;
    //div^tmpが素因数
    /*any*/
  }
  if(n!=1){/*any*/}
  return;
}