#esaikani
a=input()
if all(i=="a" or i=="b" for i in a):
    print("yes")
elif all(i=="a" for i in a):
    print("yes")
elif all(i=="b" for i in a):
    print("yes")
else:
    print("no")
