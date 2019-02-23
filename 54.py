//esaikani
s,u=map(str,input().split())
r=list(s)
e=list(u)
x=1
while(len(r)-len(e)!=0):
  if(len(r)>len(e)):
    e.append(x)
    x=x+1
  else:
    r.append(x)
    x=x+1
for x in range(0,len(r)):
  print(r[x],end=(""))
  print(e[x],end=(""))
