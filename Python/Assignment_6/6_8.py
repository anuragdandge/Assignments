# Write a Python Program to Make a Simple Calculator

def calc(num1,num2,op):
    if op == '+':
        return num1+num2
    if op == '-':
        return num1-num2
    if op == '*':
        return num1*num2
    if op == '/':
        return num1/num2
    if op == '%':
        return num1%num2




num1 = int(input("Enter Num1 "))
num2 = int(input("Enter Num2 "))
op = input("Enter Operator ")

print(calc(num1,num2,op))

