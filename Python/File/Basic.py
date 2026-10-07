'''with open("data.txt", "r") as file:
    data = file.read()

print(data)

with open("message.txt", "r") as file:
    content = file.read()

print(content)

with open("message.txt", "r") as file:
    line = file.readline()

    while line:
        print(line, end="")
        line = file.readline()

with open("message.txt", "r") as file:
    lines = file.readlines()

for line in lines:
    print(line, end="")


with open("message.txt", "a") as file:
    file.write("\nThis line was added later.")

with open("message.txt", "r") as file:
    print(file.read())'''



'''with open("students.txt", "w") as file:
    for i in range(5):
        name = input("Enter student name: ")
        roll = input("Enter roll number: ")
        file.write(name + " - " + roll + "\n")

print("Student details saved successfully.")

lines = ["Apple\n", "Banana\n", "Mango\n", "Orange\n"]

with open("fruits.txt", "w") as file:
    file.writelines(lines)

print("List written successfully.")

number = int(input("Enter a number: "))

with open("table.txt", "w") as file:
    for i in range(1, 11):
        file.write(f"{number} x {i} = {number * i}\n")

print("Multiplication table saved in table.txt")

with open("message.txt", "r") as file:
    position = int(input("Enter position to move the pointer: "))
    file.seek(position)
    print("Remaining content:")
    print(file.read())'''

with open("message.txt", "r") as file:
    print("First reading:")
    print(file.read())

    file.seek(0)

    print("\nSecond reading after seek(0):")
    print(file.read())

