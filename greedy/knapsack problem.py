from audioop import reverse
W=int(input())
V=list(map(int,input().split(" ")))
w=list(map(int,input().split(" ")))
R=[0 for x in range(len(V))]
k=0
for i in range(len(V)):
    R[i]=[V[i]/w[i],k]
    k+=1
R.sort(reverse=True)
b=0;bst=0;L=[]
for r in R:
    if(b+w[r[1]]<=W):
        b+=w[r[1]]
        L.append(r[1])
        bst+=w[r[1]]*r[0]
    else:
        break
print(bst)
print(L)