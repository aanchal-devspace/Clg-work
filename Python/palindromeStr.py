text=input("Enter a string: ")
l=len(text)
found=False
for ch in range(l//2):
    if(text[l-1-ch]==text[ch]):
        found=True
    else:
        found=False
        break    
if(found):
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")