#merge two sorted array 123789 and A2 is 2 5 6 the resultant array should be 122356789 order should be in place 
A1=[1,2,3,7,8,9]
A2=[2,5,6]
A3=A1+A2
A3.sort()
print(A3)

i=0
j=0
for k in range((len(A1)+len(A2))):
    if(A1[i]<=A2[j]):
        A3.append(A1[i])
        i+=1
    else:
        A3.append(A2[j])
        if(j<len(A2)):
          j+=1

print(A3)

