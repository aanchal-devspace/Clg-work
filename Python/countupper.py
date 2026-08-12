text=input("Enter a string: ")
count_u=0
count_l=0
for ch in text:
    if ch.isupper():
        count_u += 1
    elif ch.islower():
        count_l += 1
print(f"Number of uppercase letters: {count_u}")
print(f"Number of lowercase letters: {count_l}")