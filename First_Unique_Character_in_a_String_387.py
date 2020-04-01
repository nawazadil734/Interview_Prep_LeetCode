from collections import Counter
s = input()
ans = Counter(s)
for i in ans.values():
    print(i)