with open("message.txt", "r") as file:
    content = file.read()

characters = len(content)
words = len(content.split())
lines = len(content.splitlines())

print("Characters:", characters)
print("Words:", words)
print("Lines:", lines)