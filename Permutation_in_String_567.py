from itertools import permutations
str1 = input()
str2 = input()
ans = []
for i in list(permutations(str1)):
    ans.append(''.join(i))
for i in ans:
    if i in str2:
        print(True)
        break
else:
    print(False)