print("aanchal")
def sum(*numbers):#same type of data is passed in numbers 
    s=0
    for num in numbers:
        s=s+num
    print(s)
    print(numbers)
sum(2,5,8,5)


def details(**data):#multiple type of data like str and numners is passed
    print(data)
details(name="rohan",section="2J",rollno=123)