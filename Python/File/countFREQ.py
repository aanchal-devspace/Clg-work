word = input("Enter word to count: ").lower()

with open("message.txt", "r") as file:
    content = file.read().lower()

count = content.split().count(word)

print("Frequency of", word, "is", count)