def uniquePaths(self, m: int, n: int) -> int:
    l=[[1]*m]*n
    for i in range(1,n):
        for j in range(1,m):
            l[i][j]=l[i][j-1]+l[i-1][j]
    return l[-1][-1]