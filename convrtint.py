def itr(num):
        if(num == 1): return "I"
        if(num == 4): return "IV"
        if(num == 5): return "V"
        if(num == 9):  return "IX"
        if(num == 10): return "X"
        if(num == 40): return "XL"
        if(num == 50): return "L"
        if(num == 90): return "XC"
        if(num == 100): return "C"
        if(num == 400): return "CD"
        if(num == 500): return "D"        
        if(num == 900): return "CM"
        if(num == 1000): return "M"        

        for i in [1000, 100, 10, 1]:            
            for j in [9*i, 5*i, 4*i, i]:
                if(num>=j):
                    return itr(j) + itr(num-j) 
