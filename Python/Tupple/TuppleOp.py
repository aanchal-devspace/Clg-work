print("aanchal")
a=(12,87,45,12,90,33)
b=(40,22,78,59)
print("concatinated :",a+b)
print("repetition : ",a*2)
print("membership : ",2 in a)
print("length : ",len(a))

#by built in functions 
print(a.count(12))
print(b.index(22))

# packing and unpacking

person=("alice",45,"engineer")
name,age,job=person
print(f"name : {name } age : {age} job : {job}")
