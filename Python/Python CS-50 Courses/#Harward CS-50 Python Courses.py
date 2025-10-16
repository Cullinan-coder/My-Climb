 #----------------HARWARD CS-50 COURSES--------------#
#---------------FUNCTİONS AND VARİABLES ------------#
#------------------GENERAL FUNCTİONS----------------#
#print()  Display output
#input()  Get user input
#type()  Get the type of an object
#id() Get unique ID of an object
#dir()  List attributes/methods of an object
#help()  Show help on an object
#callable() Check if an object is callable
#repr()  Get a string representation of an object
#format()  Format a value 
#ascii()  Convert to ASCII representation
#------------------STRİNG METHODS-------------------#
#str.lower()	Converts all characters to lowercase	"HELLO".lower() → 'hello'
#str.upper()	Converts all characters to uppercase	"hello".upper() → 'HELLO'
#str.capitalize()	Capitalizes the first letter	"python".capitalize() → 'Python'
#str.title()	Capitalizes the first letter of each word	"hello world".title() → 'Hello World'
#str.swapcase()	Swaps uppercase to lowercase and vice versa	"HeLLo".swapcase() → 'hEllO'
#--------------------------------------------------# 
"""
text = "Hello My name is python"
print(text)   #THERE WAS A PROBLEM
print(ascii(text))

admin = str(input("What is your name? ").rstrip().title())
admin = admin.strip()
#admin = admin.title() 'The all letter
#admin = admin.capitalize() 'The First letter
#Dİffrent type: admin = admin.title().strip() blablablaaa
print("Nice too meet you", admin)
print(type(admin))
print(id(admin))
study_year = int(input("How many year study for Python "))
print("Woaw {} year sure , its very nice.".format(study_year))
#Diffrent type: print(f"Woaw {stdy_year} year sure , its very nice.")
print(type(study_year)) 
print(id(study_year))
#Diffrent type: print(type(stdy_year), end="")
#Output: <class 'str'> 2097077857920
"""
#----------------CONVERSİON FUNCTİONS---------------#

#int()  Convert to an integer
#float()  Convert to a floating-point number
#str()  Convert to a string
#bool()  Convert to a boolean 
#complex()  Convert to a complex number
#list()  Convert to a list
#tuple()  Convert to a tuple
#set()  Convert to a set
#dict()  Convert to a dictionary
#frozenset()  Convert to an immutable set
#bytes()  Convert to bytes
#bytearray()  Convert to a mutable byte array
#memoryview()  Create a memory view object

#---------------CALCULATOR PROJECT------------------#
"""
x = int(input("What's x?  "))
y = int(input("What's y? "))
print(f"{x+y:,}")
#We can use round() function and we round a number to another number 
#We can use f"{x+y:,}" and see like 1.000.000
print(round(float(input("What's s? ")) + float(input("What's k? "))))#Use float,Double and any else
"""
#----------------DEFİNE FUNCTİON--------------------#
"""
def my_dictinary_function():
    dictinary = {}
    nun_entries = int(input("How many key-value pairs do you want to enter"))
    for _ in range(nun_entries):
        key = input("Enter the key: ").title()
        value = input("Enter the value: ").title()
        dictinary[key] = value 
        
    return dictinary
dictinary = my_dictinary_function()
print("Generated Dictinary :"| dictinary)
"""
#-----------------CONDİTİONALS----------------------#
# if statement if x > 5: print(x) 
# if-else if x > 5: print("Yes") else: print("No") 
# if-elif-else if x > 10: print(">10") elif x == 5: print("5") else: print("<10") 
# Nested if if x > 5: if x < 20: print("Between 5-20") 
# Ternary if-else result = "Positive" if x > 0 else "Negative" 
# and Operator if x > 5 and y > 15: print("Both conditions are True") 
# or Operator if x > 5 or y > 15: print("At least one condition is True") 
# not Operator if not x: print("x is False") # pass Statement if x > 5: pass 
# match-case (Py3.10+) match x: case 1: print("One") case _: print("Other")
#---------------------------------------------------#
"""
import random
secret_number = random.randint(1, 10)
guess = int(input("Guess a number between 1 and 10: "))
if guess == secret_number:
    print("Congratulations! You guessed it right.")
elif guess > secret_number or guess < secret_number:
    print("That's Wrong.")
#Different type: else guess > secret_number:
#                   print("That's blablablaaa")
print(f"The correct number was {secret_number}.")
"""
#---------------LESS/PASS EXEAM PROJECT------------#
"""
first_exam_point = int(input("Enter the first exam point: "))
first_project = int(input("Enter the first project point: "))
second_exam_point = int(input("Enter the second exam point: "))
secont_project = int(input("Enter the second project point: "))
first_point = int((first_exam_point*0.6)+(first_project*0.4))
second_point = int((second_exam_point*0.6)+(secont_project*0.4))
total_point = int((first_point*0.4)+(second_exam_point*0.6))
if second_exam_point < 40:
    first_answer = str(input("You less the courses if you want to take the make-up exam you write yes. ").capitalize().rsplit())
    if first_answer == "Yes":
        print("You can take the make-up exam")
    else:
        print("You can take that course next semester")
        exit()
elif total_point >= 90 and total_point <= 100:
    print("Your grade is AA congratulation youre passed well")
elif total_point >= 85 and total_point < 90:
    print("Your grade is BA congratulation youre passed")
elif total_point >= 80 and total_point < 85:    
    print("Your grade is BB congratulation youre passed")
elif total_point >= 75 and total_point < 80:
    print("Your grade is CB youre passed but you need to study more")
elif total_point >= 70 and total_point < 75:
    print("Your grade is CC youre passed but you need to study more")
elif total_point >= 65 and total_point < 70:
    print("Your grade is DC I'm definitely think youre passed or not")
elif total_point >= 60 and total_point < 65:
    print("Your grade is DD I'm definitely think youre passed or not")
else:
    print("Your grade is FF youre failed")
second_answer = str(input("Do you want to take the make-up exam? ").capitalize().rsplit())
if second_answer == "Yes":
    print("You can take the make-up exam")
else:
    print("You can take that course next semester")
"""
#------------------MODULO OPERATOR------------------#
# The modulo operator (%) returns the remainder of a division
# Example: 10 % 3 returns 1 because 10 divided by 3 is 3 with a remainder of 1

# Function to check if a number is even or odd using modulo
"""
# Function to check if a number is even
def is_even(number):
    return number % 2 == 0
def is_multiple_of(number, divisor):
    return number % divisor == 0
number = int(input("Enter a number: "))
print(f"The number {number} is Even: {is_even(number)}")

divisor = int(input("Enter a divisor: "))
print(f"{number} is a multiple of {divisor}: {is_multiple_of(number, divisor)}")
"""
#--------------------------------------------------#
# Example of match-case (Python 3.10+)
"""
def http_status(status_code):
    match status_code:
        case 200:
            return "OK"
        case 404:
            return "Not Found"
        case 500:
            return "Internal Server Error"
        case _:
            return "Unknown Status Code"

status_code = int(input("Enter an HTTP status code: "))
print(f"HTTP Status {status_code}: {http_status(status_code)}")
"""
#----------------------LOOPS-----------------------#
#for loop	Iterates over a sequence
#while loop	Runs while a condition is True
#for ... else	Executes else if no break occurs
#while ... else	Executes else if no break occurs
#Nested loops	Loops inside loops (2D structures)
#break	Exits the loop immediately
#continue	Skips the current iteration
#pass	Placeholder for future code
#Infinite loop	Runs forever unless stopped
"""
#-------------------BASİC LOOPS-------------------#
print("meow\n"*int(input("How many times do you want to hear meow? ")),end="")
#---------------------WHİLE-----------------------#
i = int(input("How many times do you want to hear meow? "))
while i != 0:
    print("meow")
    i = i - 1 #Diffrent type: i -= 1 
#---------------------FOR-------------------------#
for i in range(int(input("How many times do you want to hear meow? "))):
    print("meow")
'''Diffrent type: 
for i in [0, 1, 2, 3, 4]: 
    print("meow")'''
#------------------LONGER STRİNG------------------#
n = int(input("Enter a number: "))
if n < 0:
    n = int(input("Enter a number: "))
    if n < 0:
        print("Enter a number:")#Blablablaaa
"""
#----------------SHORTER STRİNG-------------------#
"""
while True:
    n = int(input("Enter a number: "))
    if n >= 0:
        break
    else:
        continue
'''Diffrent type: if n < 0:
                    continue
              else:
                    break'''
"""
#--------------LOOP İN FUNCTİON------------------#
"""
def main():
    number = get_positive_number()
    meow(number)
def get_positive_number():
    while True:
        n = int(input("Enter a number: "))
        if n >= 0:
            return n #İf we use functioun absolutely we need to use return
def meow(n):
    for _ in range(n):
        print("meow")   
"""
#------------------LİST W\LEN--------------------#
"""
students = ["Harry", "Hermonie", "Ron", "Draco"]
for i in range(len(students)):
    print(i, students [i])
#Diffrent type: for i, student in enumerate(students):
#                   print(i, student)
"""
#---------------LİST W\DİCTİNARY-----------------#
"""
hogwarts_students = {
    "Hermonie": "Gryffindor",
    "Harry": "Gryffindor",
    "Ron": "Gryffindor",
    "Draco": "Slytherin"
}
while True:
    name = input("Enter a name: ").title()
    if name in hogwarts_students:
        print(f"{name} is in {hogwarts_students[name]}")
        break
    else:
        continue
"""
#Diffrent type: print(f"{name} is in {hogwarts_students.get(name, 'Unknown House')}")
#-------------------------------------------------#
"""
students_h_p = [
    {"name": "Hermonie", "house": "Gryffindor", "patronus": "Otter"},
    {"name": "Harry", "house": "Gryffindor", "patronus": "Stag"},
    {"name": "Ron", "house": "Gryffindor", "patronus": "Jack Russell Terrier"},
    {"name": "Draco", "house": "Slytherin", "patronus": None},
]
for name in students_h_p:
    print(f"{name['name']} is in {name['house']} and students Patronus is {name['patronus']}")
"""
#------------------NESTED LOOPS-------------------#
"""
def main():
    print_column(3)
    print_road(4)
    print_row(4)
    print_square(3)
def print_road(length):
    for _ in range(length):
        print("#", end="")
def print_square(size):
    for _ in range(size):
        print_row(size)
    for _ in range(size):
        for j in range(size):
            print("#", end="")
        print()
def print_row(width):
    print("?" * width) 
def print_column(height):
    for _ in range(height):
        print("#")
main()
"""
#-------------------------------------------------#
"""
while True:
    try:
        x = int(input("Enter a number: "))
        print(f"Square of {x} is {x**2}")
    except ValueError:
        print("x is not a number")
    else:
        break
print(f"Square of {x} is {x**2}")
"""
#-------------------------------------------------#