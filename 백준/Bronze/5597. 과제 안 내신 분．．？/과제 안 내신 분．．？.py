lst = []

for i in range(1, 31) :
    lst.append(i)
for _ in range(28):
    x = int(input())
    if (x in lst):
        lst.remove(x)
        
for i in lst:
    print(i)