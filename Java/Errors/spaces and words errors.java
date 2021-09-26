import java.util.Scanner;

public class main {

    public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            
            for(int i=0;i<3;i++){
                String s=sc.next();
                int x=sc.nextInt();
                
                 int j = 15 - s.length();
                String stringSpaces = "  ";
                
                do {
                    stringSpaces += " ";
                    j--;
                } while (j < 0);

                String intZeros = "Zeros";

                if (x < 9)
                    intZeros = "00";
                else if (x >= 9 && =< 99)
                    intZeros = "0";

                System.out.println(s + stringSpaces + intZeros + x);
            }
            

        }
    }




