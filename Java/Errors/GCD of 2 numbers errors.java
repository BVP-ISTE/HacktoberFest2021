public class GCD {

    public static void main(String[] args) {

        int n1 = 81, n2 = 153; // Earlier char was used, so even if we got the right answer, char value of that ASCII no would have been printed.

        while(n1 != n2) // another syntax error '=!'
        {
            if(n1 < n2) // syntax error
                n2 -= n1; // if n1 < n2 and we keep on doing n1 = n1 - n2, will become an infinite loop
            else
                n1 -= n2;
        }

        System.out.println("G.C.D = " + n1); // another syntax error.
    }
}
