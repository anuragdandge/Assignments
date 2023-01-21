# Write a Python Program to Find HCF or GCD


# Euclidean algorithm to find the HCF or GCD (greatest common divisor) of two numbers:
# to find the GCD of the two numbers. 
# In the function gcd it uses the while loop to find the remainder of a and b and then assigns the remainder to b and the original value of b to a,
#  until b becomes 0. Then it returns the value of a which is the GCD of the two numbers.


# def gcd(a, b):
#     while b:
#         a, b = b, a % b
#     return a

# num1 = int(input("Enter first number: "))
# num2 = int(input("Enter second number: "))

# print("The GCD of", num1, "and", num2, "is:", gcd(num1, num2))


import math
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))
print("The GCD of", num1, "and", num2, "is:", math.gcd(num1, num2))

