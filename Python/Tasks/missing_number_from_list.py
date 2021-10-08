#program to find a missing number from a list.

def missing_number(num_list):
    return sum(range(min(num_list),max(num_list)+1)) - sum(num_list) # finding that missing number in terms of difference

print(missing_number([1,2,3,4,6,7,8]))  #5

print(missing_number([10,11,12,14,15,16,17]))  #13
