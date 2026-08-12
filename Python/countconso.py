text="python programming"
count_c=0
for ch in text:
    if ch in 'BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz':
        count_c += 1
print("Number of consonants:", count_c)