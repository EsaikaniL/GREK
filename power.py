//esaikani
def Power(a):
    if (a == 0):
        return False
    while (a != 1):
            if (a % 2 != 0):
                return False
            a = a // 2
             
    return True
n=int(input())
if(Power(n)):
    print('Yes')
else:
    print('No')
