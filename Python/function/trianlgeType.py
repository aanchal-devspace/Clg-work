s1=int(input("Enter 1st side of triangle : "))
s2=int(input("Enter 2nd side of triangle : "))
s3=int(input("Enter 3rd side of triangle : "))
def traingle(side1,side2,side3):
    if(side1==side2==side3):
        print("Equilateral triangle ")
    elif(side1!=side2!=side3 ):
        print("Scalene traingle ")
    else:
        print("Isoscelas traingle")
traingle(s1,s2,s3)