def disp(num):
    if(num > 0):
        disp((num//2))
        print(num%2, end='')
        
num = int(input("Enter a decimal number:"))
disp(num)
