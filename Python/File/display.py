with open("message.txt", "r") as file:
    lines = file.readlines()

for i in range(0, len(lines), 2):
    print(lines[i], end="")