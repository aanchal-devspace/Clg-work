a1=int(input("Enter 1st angle of triangle "))
a2=int(input("Enter 2nd angle of triangle "))
a3=int(input("Enter 3rd angle of triangle "))
def traingle(a1,a2,a3):
    if(a1+a2+a3==180):
        print("Valid traingle ")
    else:
        print("Not a valid traingle ")
traingle(a1,a2,a3)
