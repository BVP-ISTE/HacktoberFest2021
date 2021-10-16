

def countPairsWithDiffK(arr, n, k):
	count = 0
	
	# Pick all elements one by one
	for i in range(0, n):
		
		# See if there is a pair of this picked element
		for j in range(i+1, n) :
			
			if arr[i] - arr[j] == k or arr[j] - arr[i] == k:
				count += 1
				
	return count


arr = [int(i) for i in input().split()]

n = len(arr)
k = int(input())
print (countPairsWithDiffK(arr, n, k))

