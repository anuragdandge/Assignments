# Write a Python Program to Find Factorial of Number Using Recursion

def fact(num):
    if num == 1:
        return 1 
    return num*fact(num-1)

n = int(input("Enter A Number "))
print("Factorial of ",n,"is",fact(n))