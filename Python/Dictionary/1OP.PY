print("aanchal")

'''# Q1. Store names and marks of 5 students in a dictionary

students = {}

for i in range(5):
    name = input("Enter student name: ")
    marks = int(input("Enter marks: "))
    students[name] = marks

print("Dictionary:", students)'''


"""
# Q2. Print student who scored highest marks

students = {
    "Aanchal": 85,
    "Riya": 92,
    "Anu": 78,
    "Priya": 95,
    "Neha": 88
}

highest = max(students.values())

for name in students:
    if students[name] == highest:
        print("Highest scorer:", name)
"""


"""
# Q3. Word frequency from a sentence

sentence = input("Enter a sentence: ")

words = sentence.split()
frequency = {}

for word in words:
    if word in frequency:
        frequency[word] += 1
    else:
        frequency[word] = 1

print("Word frequency:", frequency)
"""


"""
# Q4. Enter n keys and values, then search for a key

n = int(input("Enter number of keys: "))
data = {}

for i in range(n):
    key = input("Enter key: ")
    value = input("Enter value: ")
    data[key] = value

key = input("Enter key to search: ")

if key in data:
    print("Value:", data[key])
else:
    print("Not Found")
"""


# Q5. Print products costing more than 100

products = {
    "Pen": 50,
    "Notebook": 120,
    "Bag": 500,
    "Pencil": 20,
    "Bottle": 150
}

for product in products:
    if products[product] > 100:
        print(product)