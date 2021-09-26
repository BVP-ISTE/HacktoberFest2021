# Check redundant brackets

#Given a string mathematical expression, return true if redundant 
#brackets are present in the expression. Brackets are redundant if 
#there is nothing inside the bracket or more than one pair of brackets 
#are present.


def checkRedundant(string):
#### Implement Your Code Here
   

string = input()
ans = checkRedundant(string)
if ans is True:
    print('true')
else:
    print('false')