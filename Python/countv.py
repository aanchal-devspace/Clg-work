text="python programming"
count_vowel=0
for ch in text:
    if ch in 'AEIOUaeiou':
        count_vowel += 1
print("Number of vowels:", count_vowel)