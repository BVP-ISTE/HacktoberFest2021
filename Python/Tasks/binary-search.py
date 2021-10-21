def binarySearch(nums, item):

    begin = 0
    end = len(nums)-1
    
    while begin <= end:
        mid = begin + (end - begin)//2

        if nums[mid] == item:
            return mid
        elif nums[mid] < item:
            begin = mid + 1
        else:
            end = mid - 1

    return -1

def main():

    nums = [2, 4, 5, 8, 9, 20, 45, 60, 91]
    item = 60
    result = binarySearch(nums, item)

    if result != -1:
        print("FOUND! Index: {} ".format(result))
    else:
        print("NOT FOUND...")

if __name__ =="__main__":
    main()

