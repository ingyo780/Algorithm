H, M = map(int, input().split())
S = int(input())
q=(M+S)//60
r=(M+S)%60
if (H+q)<=23:
    print(H+q, r)
else :
    print(H+q-24,r)