# Write a Python Program to Find LCM

import math


num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

print("The LCM of", num1, "and", num2, "is:", ((num1*num2) / math.gcd(num1,num2))) 