# Write a Python program to convert a tuple to a dictionary.

tup = ('a', 'n', 'u', 'r', 'a', 'g')
dict = {}
for i in tup:
    j = tup.index(i)+1
    dict.update({i: j})
print(dict)
