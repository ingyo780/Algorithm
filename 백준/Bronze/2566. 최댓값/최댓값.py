matrix = [list(map(int, input().split())) for _ in range(9)]
# print(matrix)
mlist = []
for i in range(9):
    mlist.append(max(matrix[i]))
m = max(mlist)
row = mlist.index(m)
col = matrix[row].index(m)
print(m)
print(row+1, col+1)