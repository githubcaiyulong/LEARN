#!/usr/bin/python
# -*- coding: UTF-8 -*-

rows = input() + 1
for i in range(1,rows):
	for j in range(0,i):
		if i == 1:
			print '*' * ((rows-i)*2 - 1)
		else:
		 	print ' ' * (i - 1) + '*' * ((rows-i)*2 - 1)
		break
for i in range(1,rows):
	for j in range(0,i):
		if i == 1:
			print ' ' * (rows-i-1) + '*'
		else:
		 	print ' ' * (rows-i-1)  + '*' * (2 * i - 1)
		break
		
i=1
while i:
    j=1
    while j:
        print "*"," ",
        if i==j:
            break
        j+=1
        if j>rows:
           break
    print "\n"
    i+=1
    if i>rows:
        break