numbers = [15,14,11,88,77,93,21]
even = []
odd = []
while len(numbers) > 0:
	number = numbers.pop()
	if(number % 2 == 0):
		even.append(number)
	else:
		odd.append(number)
print even
print odd