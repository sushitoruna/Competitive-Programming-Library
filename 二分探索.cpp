struct BinSch
{
  //key以下の最大
  ll MaxInd1(vl a,ll key){if(a[0]>key)return -1;return upper_bound(all(a),key)-a.begin();}
  ll MaxIter1(vl a,ll key){if(MaxInd1(a,key)==-1)return -INF;return a[MaxInd1(a,key)];}

  //key未満の最大
  ll MaxInd2(vl a,ll key){if(a[0]>=key)return -1;return lower_bound(all(a),key)-a.begin();}
  ll MaxIter2(vl a,ll key){if(MaxInd2(a,key)==-1)return -INF;return a[MaxInd2(a,key)];}

  //key以上の最小
  ll MinInd1(vl a,ll key){return MaxInd2(a,key)+1;}
  ll MinIter1(vl a,ll key){if(MinInd1(a,key)==(ll)a.size())return INF;return a[MinInd1(a,key)];}

  //keyより大きい最小
  ll MinInd2(vl a,ll key){return MaxInd1(a,key)+1;}
  ll MinIter2(vl a,ll key){if(MinInd2(a,key)==(ll)a.size())return INF;return a[MinInd2(a,key)];}
};