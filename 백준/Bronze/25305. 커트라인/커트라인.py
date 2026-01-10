a, b = map(int, input().split())
lst = sorted(map(int, input().split()), reverse=True)
print(lst[b-1])