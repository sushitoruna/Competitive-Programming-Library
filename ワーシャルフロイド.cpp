//if i==j:d[i][j]=0; else:d[i][j]=0
rep(k,n)rep(i,n)rep(j,n)
    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);