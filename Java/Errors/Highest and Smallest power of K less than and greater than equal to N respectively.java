import java.io.*;
 
class GFG{
 
// Function to return the highest power
// of k less than or equal to n
static int prevPowerofK(int n, int k)
{
    int p = (int)(Math.log(n) / Math.log(k));
    return (int) Math.pow(k, p);
}
 
// Function to return the smallest power
// of k greater than or equal to n
static int nextPowerOfK(int n, int k)
{
//find the error
    return prevPowerofK(n, k) + k;
}
 
// Function to print the result
static void printResult(int n, int k)
{
    System.out.println(prevPowerofK(n, k) + " " + 
                       nextPowerOfK(n, k));
}
 
// Driver Code
public static void main (String args[])
{
    int n = 25, k = 3;
    printResult(n, k);
}
}
