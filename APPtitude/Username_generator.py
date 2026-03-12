'''
Task:
Generate a username by combining:

the first word of the name

the last two digits of the birth year

Rules

If the name contains spaces → use only the first word.

birth_year must be a 4-digit number.

If birth_year < 1000 → return "Invalid Year".

Ignore extra spaces in the name.

Example
Input: "kumar", 1998
Output: "kumar98"

'''

def generate_username(name, birth_year):

    # check if birth year is valid (4-digit)
    if birth_year<1000 or birth_year>2026:
        return "Invalid Year"
    
    # remove extra spaces and get first word
    first_name = name.strip().split()[0]

     # Get last two digits of birth year
    last_two = str(birth_year)[-2:]

    # generate username
    username = first_name + last_two
    return username

name = input("Enter name: ")
birth_year = int (input("Enter birth year: "))

print(generate_username(name, birth_year))

# try to print the anme and everythinmg in the main function