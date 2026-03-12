'''
Write a Python program that asks the user to enter their full name. The program should remove any extra spaces between the words and convert the name into Proper Case (capitalize the first letter of each word). Finally, display the formatted name as output.

Example

Input

What is your name: grggreer           efeg

Output

Grggreer Efeg


'''


name = input("What is your name: ")
name = name.title()
print(name)

'''
use split case here -- removes uneccecary spaces

'''

name  =input("What is your name: ")
words = name.split()
clean_name = " ".join(words)
final_name = clean_name.title()
print(final_name)