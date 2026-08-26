print("aanchal")
'''# Q2. Numbers divisible by 3

n = int(input("Enter number of elements: "))
numbers = []

for i in range(n):
    num = int(input("Enter number: "))
    numbers.append(num)

t = tuple(numbers)

for num in t:
    if num % 3 == 0:
        print(num)'''




'''# Q3. First string in dictionary order

n = int(input("Enter number of strings: "))
words = []

for i in range(n):
    word = input("Enter string: ")
    words.append(word)

t = tuple(words)

first = t[0]

for word in t:
    if word < first:
        first = word

print("First string:", first)'''



"""
# Q4. Count prime numbers

n = int(input("Enter number of elements: "))
numbers = []

for i in range(n):
    num = int(input("Enter number: "))
    numbers.append(num)

t = tuple(numbers)

count = 0

for num in t:
    if num >= 2:
        prime = True

        for i in range(2, num):
            if num % i == 0:
                prime = False
                break

        if prime:
            count += 1

print("Number of prime numbers:", count)
"""


# Q5. Maximum difference between any two numbers

numbers = []

for i in range(5):
    num = int(input("Enter number: "))
    numbers.append(num)

t = tuple(numbers)

difference = max(t) - min(t)

print("Maximum difference:", difference)