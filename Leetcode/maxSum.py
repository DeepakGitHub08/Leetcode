from collections import Counter
def solution(N, A, B):
    dic ={}
    cA = Counter(A)
    cB = Counter(B)
    for i in range(N+1):
        dic[i]=0
        dic[i] = cA[i] + cB[i]
    i=N
    val={}
    for v in sorted(dic,key=dic.get, reverse=True):
        val[v]=i
        i-=1
    sum=0
    print(val);
    for j in range(len(A)):
        sum+=val[A[j]] + val[B[j]]

    return sum


n = 5
a = [1,2,2,2]
b = [1,4,4,3]
print(solution(n,a,b));