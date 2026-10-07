vowels = 0
consonants = 0

with open("message.txt", "r") as file:
    content = file.read().lower()

for char in content:
    if char.isalpha():
        if char in "aeiou":
            vowels += 1
        else:
            consonants += 1

print("Vowels:", vowels)
print("Consonants:", consonants)