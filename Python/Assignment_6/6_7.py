# Write a Python Program to Find the Factors of a Number

number = int(input("Enter a number: "))
factors = []
for i in range(1, number + 1):
    if number % i == 0:
        factors.append(i)
print("The factors of", number, "are:", factors)