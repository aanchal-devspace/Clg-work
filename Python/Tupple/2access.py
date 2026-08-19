print("aanchal")
person=("alice",45,"engineer")
name,age,job=person
print("which data you want to access\n1.name\n2.age\n3.job ")
choice=int(input("enter your choice : "))
if(choice==1):
    print(name)
elif(choice==2):
    print(age)
elif(choice==3):
    print(job)
else:
    print("Invalid choice")