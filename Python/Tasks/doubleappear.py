# program to find if the number or aplhabet appear twice in word or in number

inp=list("anumsharma usa")
result = []
n = len(inp)
for i in range(n):
    count = 0
    for j in range(n):
        if inp[j]==inp[i]: # There could be characters which could appear more than twice
            count += 1
            
    if count == 2 and inp[i] not in result and (inp[i].isalpha() or inp[i].isdigit()):
        result.append(inp[i])
print (result) # ['u', 'm', 's']
