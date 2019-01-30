//esaikani
N=int(raw_input())
list1=[]
final=[]
if(1<= N <= 100000):
  for i in range(0,N):
    k=int(raw_input())
    list1.append(k)
  for i in range(0,N):
    if(i==list1[i]):
      final.append(list1[i])
if(final==[]):
  print("-1")
else:
  print final
