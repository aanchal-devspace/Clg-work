print("aanchal")
student={"name":"Aanchal","age":"20","course":"BTech"}
print(student)

'''empty_dic={}
print(empty_dic)

print("length : ",len(student))

print(student["name"])
print(student["age"])
print(student["course"])

print(student.get("name"))
print(student.get("city","city not found"))

student["city"]="Noida"
student["age"]=21
print(student)

del student["course"]
print(student)

age=student.pop("age")
print(age)
print(student)
print(student.popitem()) #pop last item of dict.

temp={"a":2,"B":6}
temp.clear()
print(temp)'''

print(student.keys())
print(student.values())
print(student.items())
for key in student :
    print(key)

for key in student.keys():
    print(key)

for value in student.values():
    print(value)

for key,value in student.items():
    print(key ,":",value)