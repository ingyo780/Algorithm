n = int(input())
for _ in range(n):
    arr=[x for x in input() if x.isalpha()]
    dic = {}
    for v in arr :
        if v in dic:
            dic[v] += 1
        else :
            dic[v] = 1
    dlst = sorted(dic.items(), key=lambda item: item[1], reverse=True)
    if (len(dlst) < 2 or dlst[0][1] != dlst[1][1]) :
        print(dlst[0][0])
    else :
        print("?")