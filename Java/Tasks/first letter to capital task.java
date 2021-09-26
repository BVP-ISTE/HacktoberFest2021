class Main {
  public static void main(String[] args) {

    // create a string
    String message = "everyone loves java";

    // stores each characters to a char array
    char[] charArray = message.toCharArray();
    boolean foundSpace = true;

    for(int i = 0; i < charArray.length; i++) {

      // if the array element is a letter
      if(Character.isLetter(charArray[i])) {

        // check space is present before the letter
        if(foundSpace) {
            
            // complete this if loop for the code // 

        }
      }

      else {
        // if the new character is not character
        foundSpace = true;
      }
    }

    // convert the char array to the string
    message = String.valueOf(charArray);
    System.out.println("Message: " + message);
  }
}