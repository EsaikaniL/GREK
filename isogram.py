//esaikani
ch=input()
n=len(ch)
p=0
for i in range(0,n):
  for j in range(i+1,n):
    if(ch[i]==ch[j]):
      p=p=1
      break
if(p==0):
  print("yes")
else:
  print("no")
      
