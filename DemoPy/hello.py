#!/usr/bin/python
#-*- coding:UTF-8 -*-
s = "你好啊，人类";
print s.decode("utf-8").encode("gbk");
print 'dongshan \'zaiqi'
print "yitong \'tianxia"
if True:
	print "zaijian"
else:
	print "baibai"
'''
ssss
hamapi
weqe
'''
import sys; x = 'runoob'; sys.stdout.write(x + '\n')

m = "字符串"
print"--"*10+m.decode("utf-8").encode("gbk")+"--"*10
#字符串
a = "abcdef"
print a[1:5]
print a*2
print a+"ghijk"

m = "列表"
print"--"*10+m.decode("utf-8").encode("gbk")+"--"*10
#列表 
list = ["big","small",10,a]
list2 = ["really",a,55]
print list
print list[0:3:2]
list[1] = "apple"
print list[1][2]
print list2 * 2
print list + list2

m = "元组"
print"--"*10+m.decode("utf-8").encode("gbk")+"--"*10
#元组 元组中的值不能改变列表可以
tuple = ('ad',"ap","sup",'jungle','top');
print tuple
print tuple[1:]

m = "字典"
print"--"*10+m.decode("utf-8").encode("gbk")+"--"*10
#字典
dict = {}
dict["dongshan"] = "zaiqi"
dict[3] = "nian"
dictwo = {"fengsheng":"shuiqi",'code':4444,'string':a}
print dict
print dict["dongshan"]
print dictwo
print dictwo['string']
print dictwo.keys()
print dictwo.values()
print"--"*20

print type(a)
print type(dictwo)
