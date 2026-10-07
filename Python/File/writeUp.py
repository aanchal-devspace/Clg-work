with open("message.txt", "r") as file:
    content = file.read()

with open("uppercase.txt", "w") as file:
    file.write(content.upper())

print("Uppercase content saved successfully.")