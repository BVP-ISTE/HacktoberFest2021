def findlcm(n): 
      
    # Initialize result 
    ans = 1; 
  
    # Ans contains LCM of 1, 2, 3, ..i 
    # after i'th iteration 
    for i in range(1, n + 1): 
        ans = (((i * ans)) // 
          (__gcd(i, ans))); 
  
    return ans; 
  
# Function to find the highest power 
# of 2 which divides LCM of first n 
# natural numbers 
def highestPower(n): 
      
    # Find lcm of first 
    # N natural numbers 
    lcm = findlcm(n); 
  
    # To store the highest 
    # required power of 2 
    ans = 0; 
  
    # Counting number of consecutive zeros 
    # from the end in the given binary String 
    for i in range(1, n): 
        x = int(pow(2, i)); 
          
        if (lcm % x == 0): 
            ans = i; 
        if (x > n): 
            break; 
  
    return ans; 
  
def __gcd(a, b): 
   #complete the function
  
# Driver code 
if __name__ == '__main__': 
      
    n = 15; 
  
    print(highestPower(n)); 
