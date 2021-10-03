class FrequencyofLetter_Task {
    public static void main(String[] args) {
        String str = "this code is for counting the frequency of specific letter.";
        char ch = 'e';
        int frequency = 0;

        //This loop checks the number of e in the given sentence.
        for(int i=0; i < str.length(); i++){ 
            if(str.charAt(i) == ch)
                frequency++;
        }
        System.out.println("Frequency of " + ch + " = " + frequency); //Here, the final number of e in the sentence is printed.
    }
}