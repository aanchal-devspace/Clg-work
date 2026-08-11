#check if num is anagram or not 
num = input("Enter number : ")
num1 = input("Enter number : ")
if(sorted(num) == sorted(num1)):
    print("Anagram")
else:
    print("Not anagram")

''' Output :
Enter number : 741
Enter number : 147
Anagram
'''
