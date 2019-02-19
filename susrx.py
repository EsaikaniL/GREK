//esaikani
s=raw_input()
n=[]
for i in s:
    if(i not in n):
        n.append(i)
if(len(n)==27 or len(n)==28):
    print("yes")
else:
    print("no")
    
		   
