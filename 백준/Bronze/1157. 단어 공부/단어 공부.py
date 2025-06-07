sen = input()
lsen = list(sen.upper())
dic={}
for v in lsen:
    if v in dic:
        dic[v] += 1
    else :
        dic[v] = 1
ldic = sorted(dic.items(), key = lambda item: item[1], reverse=True)
if (len(ldic) < 2 or ldic[0][1] != ldic[1][1]) :
    print(ldic[0][0])
else :
    print("?")