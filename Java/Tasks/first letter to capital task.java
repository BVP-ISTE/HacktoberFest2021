class Main {
  public static void main(String[] args) {

    // create a string
    String name = "programiz";

    // create two substrings from name
    // first substring contains first letter of name
    // second substring contains remaining letters
    String firstLetter = name.substring(0, 1);
    String remainingLetters = name.substring(1, name.length());

    // change the first letter to uppercase
    firstLetter = firstLetter.toUpperCase();

    // join the two substrings
    name = firstLetter + remainingLetters;
    System.out.println("Name: " + name);

  }
}
