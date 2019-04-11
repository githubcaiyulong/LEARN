#!/usr/bin/python
# -*- coding: UTF-8 -*-
i = 2
while(i < 100):
	j = 2
	while(i >= j):
		if(i % j == 0):
			break
		j += 1
	if(i == j) : print i,'shi su shu'
	i += 1
