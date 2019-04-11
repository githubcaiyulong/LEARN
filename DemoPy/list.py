#!/usr/bin/python
# -*- coding: UTF-8 -*-

list1 = ['1','apple','2','pear']
list2 = ['open','close','down','up','real']

#列表截取
print list1[0]
print list1[-1]
print list2[0:3]

#列表重复
print list1*2

#列表组合
print list1 + list2

#列表长度
print len(list1)
print len(list2)

#删除列表元素
del list1[0]
print list1

#元素是否存在于列表中
print 'apple' in list1

#迭代
for i in list2:
	print i

list1 = [0 for i in list1]
print list1

#比较
print cmp(list1,list2)

#将元组转换为列表
aTuple = (1,2,3,4)
list3 = list(aTuple)
print list3

#最大值最小值
print max(list3)
print min(list3)

#在列表末尾添加新元素
list3.append(5)
print list3
#在一个列表末尾追加另一个序列
list3.extend(list1)
print list3

#统计元素出现的次数
list3.count(1)
print list3

#找出第一个匹配值的索引
list3.index(1)
print list3

#将对象插入列表
list3.insert(0,'banana')
print list3
#移除列表中的一个元素（默认最后一个）
list3.pop(0)
print list3

#移除列表中的某个值得第一个匹配项
list3.remove(1)
print list3

#反向列表元素
list3.reverse()
print list3

#排序
list3.sort()
print list3
