# Write a Python program to remove an item from a tuple.

tup = ('a','n','u','r','a','g')

element = input("Enter an Element to be removed ")

ind = tup.index(element)

# print(ind)

print(tup)

tup = tup[:ind] + tup[ind+1:]

print(tup)