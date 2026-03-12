'''
Task Description: Email Validation Program

Your task is to write a Python program that
checks whether an email address is valid or
invalid based on specific rules.

Objective

Create a function that takes an email address
as input and determines if it follows the 
required format. The program should then 
print "Valid" or "Invalid".

Input

A string representing an email address.

Example:

user@gmail.com
Output

Print "Valid" if the email satisfies all the rules.

Print "Invalid" if any rule is violated.

Validation Rules

The email must satisfy the following conditions:

Exactly one @ symbol

The email should contain only one @.

Example:

Valid → user@gmail.com

Invalid → user@@gmail.com

Valid domain ending

The email must end with .com or .in.

Example:

Valid → user@yahoo.com

Valid → user@domain.in

Invalid → user@domain.org

Maximum length

The total length of the email must be ≤ 100 characters.

Username and domain must exist

There must be text before and after the @.

Example:

Invalid → @gmail.com

Invalid → user@

Uppercase characters are allowed

Emails like User@Gmail.com are still considered valid.
'''
def validate_email(email):

    #length constraint 
    if len(email)>100:
        print("Invalid")
        return
    
    # check exactly one '@'
    if email.cout('@') !=1:
        print("Invalid")
        return

    # Split username and domain
    username, domain = email.split('@')

    # Check missing username or domain
    if username == "" or domain == "":
        print("Invalid")
        return

    # Check domain ending
    if domain.endswith(".com") or domain.endswith(".in"):
        print("Valid")
    else:
        print("Invalid")


# Input
email = input("Enter email: ")

validate_email(email)
