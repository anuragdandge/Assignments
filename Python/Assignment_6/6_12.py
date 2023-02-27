# Write a Python Program to Find Sum of Natural Numbers Using Recursion

def sum(num):
    if num == 0:return 0
    return num+sum(num-1)
n = int(input("Enter A number :"))
print("Sum of Natural Number = ",sum(n))