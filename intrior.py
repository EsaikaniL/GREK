//esaikani
n=int(input())
m=int(input())
o=int(input())
if((m>90 and n>90) or(o>90 and n>90)or (m>90 and o>90)):
  print("no")
else:
  if(m+n+o == 180):
    print("yes")
  else:
    print("no")
