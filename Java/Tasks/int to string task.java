class Main {
  public static void main(String[] args) {

    // create int variable
    int num1 = 36;
    int num2 = 99;

    /* convert int to string using the inbuilt method */
   // write your code here
   String s1 = String.valueOf(num1);
   String s2 = String.valueOf(num2);
    /*another way to implement the same*/
    String s1 = Integer.toString(num1);
   String s2 = Integer.toString(num2);
    // print string variables
    System.out.println(s1);    // 36
    System.out.println(s2);    // 99
  }
}
