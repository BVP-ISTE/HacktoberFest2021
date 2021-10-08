class Main {
  public static void main(String[] args) {
    // create a string
    String txt = "This is Programiz";
    String str1 = "Programiz";
    String str2 = "Programming";

    // check if substring is present or not(i.e. str1 and str2)
    
    
    
    //write your code here..
    boolean result = txt.contains(str1);
    
    //check for both the strings and take the help of conditional statements..
    if(result) {
      System.out.println(str1 + " is present in the string.");
    }
    else {
      System.out.println(str1 + " is not present in the string.");
    }

    result = txt.contains(str2);
    if(result) {
      System.out.println(str2 + " is present in the string.");
    }
    else {
      System.out.println(str2 + " is not present in the string.");
    }
    
    
  }
}
