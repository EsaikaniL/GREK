s5=raw_input()
s2=""
for i in range(len(s5)-1):
    s2=s2+s5[i]
s1=s2[::-1]
if s2==s1:
    print("YES")
else:
    print("NO")
      
