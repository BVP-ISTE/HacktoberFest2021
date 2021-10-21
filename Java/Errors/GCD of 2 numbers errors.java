public class GCD {

    public static void main(String[] args) {

        int n1 = 81, n2 = 153; // Earlier char was used, so even if we got the right answer, char value of that ASCII no would have been printed. fixed

        while(n1 != n2) // another syntax error '=!' fixed
        {
            if(n1 > n2) // syntax error fixed
                n1 = n1-n2; // if n1 < n2 and we keep on doing n1 = n1 - n2, will become an infinite loop fixed
            else
                n2 = n2-n1;
        }

        System.out.println("G.C.D = " + n2); // another syntax error. fixed
    }
}
