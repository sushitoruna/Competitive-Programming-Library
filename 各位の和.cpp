ll kurai_sum(ll x,ll k)//k進法
{ll sum=0;while(x!=0){sum+=x%k;x/=k;}return sum;}