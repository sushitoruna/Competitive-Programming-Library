struct BIT {
  private:
   vector<int> bit;
   int N;
  public:
   BIT(int size) {
     N = size;
     bit.resize(N + 1);
   }
   // 一点更新です
   void add(int a, int w) {
     for (int x = a; x <= N; x += x & -x) bit[x] += w;
   }
   // 1~Nまでの和を求める。
   int sum(int a) {
     int ret = 0;
     for (int x = a; x > 0; x -= x & -x) ret += bit[x];
     return ret;
   }
 };