# Program to multiply two matrices     
import numpy
row_1,column_1=map(int,input("Enter rows and columns of matrix 1:").split())
row_2,column_2=map(int,input("Enter rows and columns of matrix 2:").split())
e=[]
f=[]
for i in range(row_1):
    elements=list(map(int,input("Enter number of elemnts that is equal to column_1:").split()))
    e.append(elements)
for i in range(row_2):
    elements=list(map(int,input("Enter number of elemnts that is equal to column_2:").split()))
    f.append(elements)
arr_1=numpy.array(e)
arr_2=numpy.array(f)
if column_1==row_2:
    print(numpy.dot(arr_1,arr_2))
elif column_2==row_1:
    print(numpy.dot(arr_2,arr_1))
else:
    print("Matrices cant be printed")

