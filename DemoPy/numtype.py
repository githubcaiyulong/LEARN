#!/usr/bin/python
#-*- coding:UTF-8 -*-
a = [1,2,3]
b = 1
print a and b
print a or b
print not(a and b)
list = [1,2,3,4,a]
print a in list
print b in list
c = a
d = a[:]
print c is d
print d is a
print d == a 
print ~b
print d