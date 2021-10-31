#reverse each word
#find the error and correct it
st=input()

l=[] # only error in the code, dict instead of list

l =st.split()
for i in l:
    print(i[::-1],end=" ")
