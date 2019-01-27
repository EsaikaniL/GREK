def maxOR(arr, n, k, x): 
  
    preSum = [0] * (n + 1)  
    suffSum = [0] * (n + 1) 
    pow = 1
    for i in range(0 ,k): 
        pow *= x
    preSum[0] = 0
    for i in range(0, n): 
        preSum[i + 1] = preSum[i] | arr[i] 
    suffSum[n] = 0
    for i in range(n-1, -1, -1): 
        suffSum[i] = suffSum[i + 1] | arr[i] 
  
    res = 0
    for i in range(0 ,n): 
        res = max(res, preSum[i] |  
           (arr[i] * pow) | suffSum[i + 1]) 
  
    return res 
arr = input()
n = len(arr)  
k = 2
x = 3
print(maxOR(arr, n, k, x)) 
  
