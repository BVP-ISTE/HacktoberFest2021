class Main {
  public static void main(String[] args) {
    // create a string
    String txt = "This is Programiz";
    String str1 = "Programiz";
    String str2 = "Programming";

    // check if substring is present or not(i.e. str1 and str2)
    
    //check for both the strings and take the help of conditional statements..
    
    //write your code here..
    
     int f1=0;
    int f2=0;
		String[] arrOfStr = txt.split(" ");
		int len=arrOfStr.length;
		for(int i=0;i<len;i++){
		    if(arrOfStr[i].equals(str1)){
		        f1=1;
		        System.out.println(str1+" is present. ");
		    }
		    if(arrOfStr[i].equals(str2)){
		        f2=1;
		        System.out.println(str2+" is present. ");
		    }
		}
		if(f1!=1){
		    System.out.println(str1+" is not present. ");
		}
		if(f2!=1){
		    System.out.println(str2+" is not present. ");
		}
    
  }
}
