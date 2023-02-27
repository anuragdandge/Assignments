
#  Important Programs :-

|-|-|
|
###  `1` Program to Map two list into dictionary
```python
def map_list_to_dict(list1, list2):
    return dict(zip(list1, list2))    
```
---
###  `2` Program to sort dictionary with the help of key or values
```python
def sort_dict_by_key(dict1):
    return dict(sorted(dict1.items(), key=lambda x: x[0]))
def sort_dict_by_value(dict1):
    return dict(sorted(dict1.items(), key=lambda x: x[1]))
```
---
###  `3` program to create dictionary without loosing duplicate value
```python
def create_dict_without_duplicate_value(list1, list2):
    return dict(zip(list1, list2))
```
---
###  `4` program to calculate the average of similar key values
```python
def calculate_average_of_similar_key_values(dict1):
    dict2 = {}
    for key, value in dict1.items():
        if key in dict2:
            dict2[key].append(value)
        else:
            dict2[key] = [value]
    for key, value in dict2.items():
        dict2[key] = sum(value) / len(value)
    return dict2
```
---
###  `5` Program to replace dictionary value with their average
```python
def replace_dict_value_with_average(dict1):
    dict2 = {}
    for key, value in dict1.items():
        if key in dict2:
            dict2[key].append(value)
        else:
            dict2[key] = [value]
    for key, value in dict2.items():
        dict2[key] = sum(value) / len(value)
    return dict2
```
---
###  `6` program to remove an element from the list or tuple
```python
def remove_element_from_list(list1, element):
    return [i for i in list1 if i != element]
def remove_element_from_tuple(tuple1, element):
    return tuple(i for i in tuple1 if i != element)
```
---
###  `7` program to unzip list of tuple into individual list
```python
def unzip_list_of_tuple(list1):
    return list(zip(*list1))
```
---
###  `8` program to add or remove items from set
```python
def add_item_to_set(set1, item):
    set1.add(item)
    return set1
def remove_item_from_set(set1, item):
    set1.remove(item)
    return set1
```
---
###  `9` program to create union & intersection of set
```python
def create_union_of_set(set1, set2):
    return set1.union(set2)
def create_intersection_of_set(set1, set2):
    return set1.intersection(set2)
```
###  `10` program to convert decimal to binary & hexadecimal
```python
def convert_decimal_to_binary(number):
    return bin(number)
def convert_decimal_to_hexadecimal(number):
    return hex(number)
```
---
###  `11` program to convert tuple into string or convert list to tuple
```python
def convert_tuple_to_string(tuple1):
    return ''.join(tuple1)
def convert_list_to_tuple(list1):
    return tuple(list1)
```
---
###  `12` program to make simple calculator
```python
def add(a, b):
    return a + b
def subtract(a, b):
    return a - b
def multiply(a, b):
    return a * b
def divide(a, b):
    return a / b
```
---
###  `13` program to find sum of natural number using recursion
```python
def sum_of_natural_number(number):
    if number == 1:
        return 1
    else:
        return number + sum_of_natural_number(number - 1)
```
---
###  `14` Find out largest and smallest word in the string
```python
def find_largest_and_smallest_word_in_string(string):
    list1 = string.split()
    return max(list1, key=len), min(list1, key=len)
```
---
###  `15` programme to remove the special symbol from given string 
```python
def remove_special_symbol_from_string(string):
    return ''.join(i for i in string if i.isalnum())
```
---
###  `16` program to  demonstrate encapsulation Or inheritance Or polymorphism
```python
class Encapsulation:
    def __init__(self, a, b):
        self.__a = a
        self.__b = b
    def get_a(self):
        return self.__a
    def get_b(self):
        return self.__b
    def set_a(self, a):
        self.__a = a
    def set_b(self, b):
        self.__b = b
class Inheritance(Encapsulation):
    def __init__(self, a, b):
        super().__init__(a, b)
    def get_a(self):
        return self._Encapsulation__a
    def get_b(self):
        return self._Encapsulation__b
    def set_a(self, a):
        self._Encapsulation__a = a
    def set_b(self, b):
        self._Encapsulation__b = b
class Polymorphism:
    def __init__(self, a, b):
        self.__a = a
        self.__b = b
    def get_a(self):
        return self.__a
    def get_b(self):
        return self.__b
    def set_a(self, a):
        self.__a = a
    def set_b(self, b):
        self.__b = b
    def __add__(self, other):
        return self.__a + other.__a, self.__b + other.__b
    def __sub__(self, other):
        return self.__a - other.__a, self.__b - other.__b
    def __mul__(self, other):
        return self.__a * other.__a, self.__b * other.__b
    def __truediv__(self, other):
        return self.__a / other.__a, self.__b / other.__b
```
---
###  `17` program to remove empty string from list of string
```python
def remove_empty_string_from_list_of_string(list1):
    return [i for i in list1 if i]
```
---
###   `18` program to print prime numbers from interval
```python
def print_prime_numbers_from_interval(start, end):
    for i in range(start, end + 1):
        if i > 1:
            for j in range(2, i):
                if i % j == 0:
                    break
            else:
                print(i)
```
---
###   `19`program to print fibonacci series
```python
def print_fibonacci_series(number):
    a, b = 0, 1
    for i in range(number):
        print(a, end=' ')
        a, b = b, a + b
```
---

###   `20` program to find largest number in list without map function
```python
def find_largest_number_in_list(list1):
    return max(list1)
```
---
###   `21` program to remove repeated elements form list without using builtin function
```python
def remove_repeated_elements_from_list(list1):
    return list(set(list1))
```
---
###    `22` program to identify even and odd
```python
def identify_even_and_odd(number):
    if number % 2 == 0:
        return 'even'
    else:
        return 'odd'
```

