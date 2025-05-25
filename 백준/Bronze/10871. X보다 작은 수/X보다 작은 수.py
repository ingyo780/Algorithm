n, x = map(int, input().split())
alist = [int(v) for v in input().split()]
for val in alist:
    if (val < x) :
        print(val, end=" ")