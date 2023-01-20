# Write a Python program to check if a given set is superset of itself and superset of
# another given set.

set_a = {1,2,3,4,5,6,7,8,9,0}

set_b = {4,5,6,7,8,}

print("Is Set A SuperSet of Itself = ",set_a.issuperset(set_a))

print("Is Set A SuperSet of Set b = ",set_a.issuperset(set_b))
