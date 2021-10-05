def maxPathSum(ar1,ar2 , m , n): 
    i, j = 0, 0
    result, sum1, sum2= 0, 0, 0
    while (i < m and j < n): 
        if ar1[i] < ar2[j]: 
            sum1 += ar1[i] 
            i+=1
        elif ar1[i] > ar2[j]: 
            sum2 += ar2[j] 
            j+=1
        else:   
            result+= max(sum1,sum2) 
            sum1, sum2 = 0, 0
            while (i < m and j < n and ar1[i]==ar2[j]): 
                result += ar1[i] 
                i+=1
                j+=1
    while i < m: 
        sum1 += ar1[i] 
        i+=1
    while j < n: 
        #complete the while loop
        sum2 += ar2[j]
        j+=1
        
    result += max(sum1,sum2) 
    return result 
  
# Driver function 
m=int(input())
ar1=[int(i) for i in input().strip().split()]
n=int(input())
ar2=[int(i) for i in input().strip().split()]
print (maxPathSum(ar1, ar2, m, n)) 
  
    
