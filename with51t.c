
//esaikani
void printFibonacciNumbers() 
{ 
    int f1 = 0, f2 = 1, i,n; 
    scanf("%d",&n);
    if (n < 1) 
        return; 
  
    for (i = 1; i <= n; i++) 
    { 
        printf("%d ", f2); 
        int next = f1 + f2; 
        f1 = f2; 
        f2 = next; 
    } 
} 
  
// Driver Code 
int main() 
{ 
    printFibonacciNumbers(); 
    return 0; 
} 
