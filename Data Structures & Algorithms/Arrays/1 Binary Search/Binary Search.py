def binarySearch(alist,item):
	first = 0
	last = len(alist)-1
	found = False

	while first<=last and not found:
		midpoint = (first + last)//2
		if alist[midpoint] == item:
			found = True
		else:
			if item < alist[midpoint]:
				last = midpoint-1
			else:
				first = midpoint+1
	return found

print('Enter The List')
a = [int(x) for x in input().split()]
n = input("Enter The Element To Be Searched : ")
print(binarySearch(a,int(n))