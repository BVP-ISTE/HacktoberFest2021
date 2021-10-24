num = input("Enter a number ")
lst = [int(x) for x in num]
n = len(lst)
res = 1
for ele in range(0,n-1):
    if abs(lst[ele] - lst[ele+1]) != 1:
        res = 0
if res == 1:
    print("JUMPING NUMBER")
else:
    print("NOT A JUMPING NUMBER")
