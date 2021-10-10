# Program to multiply two matrices 

# 3x3 matrix
X = [      [12,7,3],
               [4 ,5,6],
               [7 ,8,9]  ]
# 3x4 matrix
Y = [ [5,8,1,2],
          [6,7,3,0],
          [4,5,9,1] ]
# result is 3x4
result = [  [0,0,0,0],
                    [0,0,0,0],
                    [0,0,0,0] ]

print (len(Y[0]))  # 4
print (len(X))  # 3
print (len(Y)) # 3
# iterate through rows of X
for i in range(len(X)):
    # iterate through columns of Y
    for j in range(len(Y[0])):
        _sum=0
        for k in range(len(X[0])):
            _sum += X[i][k] * Y[k][j]
        result[i][j] = _sum
   

for r in result:
   print(r)
