with open("message.txt", "r") as file:
    lines = file.readlines()

with open("no_blank_lines.txt", "w") as file:
    for line in lines:
        if line.strip():
            file.write(line)

print("Blank lines removed successfully.")