text = "programming"
print("Duplicate characters in a given string: ",end="")
for ch in text:
    if text.count(ch) > 1:
        print(ch,end=" ")
        text = text.replace(ch, '*')