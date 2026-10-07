word = input("Enter word to search: ").lower()

with open("message.txt", "r") as file:
    content = file.read().lower()

if word in content:
    print("Word found.")
else:
    print("Word not found.")