//g=辺情報(pl=点,距離) d=距離結果(INF) s=スタート点
struct Edge
{
    ll to;
    ll cost;
};
using Graph = vector<vector<Edge>>;
void dij(const Graph&G,ll s,vl&dis)
{
    priority_queue<pl,vector<pl>,greater<pl>>pq;//「仮の最短距離, 頂点」が小さい順に並ぶ
    dis[s]=0;
    pq.push({dis[s],s});
    while(!pq.empty())
    {
      pl pa=pq.top();
      pq.pop();
      ll v = pa.second;
      if(dis[v] < pa.first)continue;//最短距離で無ければ無視
      for(auto &e:G[v])
      {
        if(dis[e.to] > dis[v]+e.cost)// 最短距離候補なら priority_queue に追加
        {  
          dis[e.to] = dis[v] + e.cost;
          pq.push({dis[e.to],e.to});
        }
      }
    }
}