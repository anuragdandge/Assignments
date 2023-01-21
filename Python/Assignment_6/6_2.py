# Write a Python Program to Find Numbers Divisible by Another Number

li = list()
frm= int(input("Enter From "))
to = int(input("Enter to "))
num = int(input("Enter Number to check"))
for i in range(frm,to):
    if i%num==0:
        li.append(i);
print(li)

