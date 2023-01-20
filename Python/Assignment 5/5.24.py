# Write a Python program to remove the intersection of a 2nd set from the 1st set.

set_a = {1,2,3,4,5,6,7,8,9,0}

set_b = {4,5,6,7,8,}

set_a.difference_update(set_b)

print(set_a)