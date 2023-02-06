def func(b,W,n,x):
    V = [[0 for y in range(x + 1)] for y in range(n + 1)]
    for i in range(n):
        for w in range(x+1):
            if(W[i]<=w):
                if(b[i]+V[i-1][w-W[i]]>V[i-1][w]):
                    V[i][w]=b[i]+V[i-1][w-W[i]]
                else:
                    V[i][w]=V[i-1][w]
            else:
                V[i][w]=V[i-1][w]
    return V
def item(V,n,x,W):
    i=n-1
    k=x
    while(i>0 and k>0):
        if(V[i][k]!=V[i-1][k]):
            i-=1
            print(i)
            k-=W[i]
        else:
            i-=1
    print(i,k)
Val=[3,4,5,6]
W=[2,3,4,5]
V=func(Val,W,len(W),5)
for i in range(-1,4):
    for j in range(6):
        print(V[i][j],end=' ')
    print()
# item(V,len(W),5,W)
print(V[len(W)-1][5])