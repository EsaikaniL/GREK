//esai
a,b=raw_input().split()
b=int(b)
l=[int(x) for x in raw_input().split()]
l1=[int(x) for x in raw_input().split()]
for x in l1:
    l.append(x)
for i in range(b):
    print max(l),
    l.remove(max(l))
