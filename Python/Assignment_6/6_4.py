# Write a Python program to find the repeated items of a tuple.

tup  = ('a','a','b','c')
list = []
rep=0
for i in tup:
    if tup.count(i) > 1 :
        rep = i
        list.append(i)
co = len(list)
print(rep,"is repeated ",co," times")



