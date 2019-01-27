//esaikani
def binary(n):
   if n > 1 and n<=100000:
       binary(n//2)
   print(n % 2,end = '')
dec = int(input())
binary(dec)
