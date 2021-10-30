message = str(input("Enter a string:"))
sub=str(input("Enter the substring you want to search:"))


if(message.find(sub)):
  print("Found")
else:
  print("Not found")
