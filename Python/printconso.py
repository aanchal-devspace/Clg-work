text="python programming"
count_c=0
for ch in text:
    if ch in 'BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz':
        print(ch,text.index(ch))