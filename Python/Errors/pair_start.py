# Pair star

# Given a string, compute recursively a new string where identical
# chars that are adjacent in the original string are separated from
# each other by a "*".
# Read input as specified in the question.
# Print output as specified in the question.

def pairStar(Input, Output, i = 0) :
     
    Output = Output + Input[i]
    if (i == len(Input) - 1) :
        print(Output)
        return;
    
    if (Input[i] == Input[i + 1]) :
        Output = Output + '*';
 
    pairStar(Input, Output, i + 1);
    
s = input()
output = ""
pairStar(s, output) 
