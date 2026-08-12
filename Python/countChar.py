text="python programming"
count_c=0
count=input("Enter the character to count:")
for ch in text:
    if ch in count:
        count_c += 1
print(count_c)