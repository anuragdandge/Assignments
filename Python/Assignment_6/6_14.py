# Write a Python Program to Convert Decimal to Binary Using Recursion
def binary(num):
    if num == 0:return 0 
    else : return (num % 2 ) + 10 * binary(num // 2 )
num = int(input("Enter A Number "))
print(num,"in Binary = ",binary(num))