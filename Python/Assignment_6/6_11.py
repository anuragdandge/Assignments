# Write a Python program to convert a tuple to a dictionary.

tup = ('a', 'n', 'u', 'r', 'a', 'g')

dict = {}

# print(tup[1])
for i in tup:
    j = tup.index(i)+1
    dict.update({i: j})
print(dict)
