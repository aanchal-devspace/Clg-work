num=[10,20,30,40]
print("AANCHAL")

num.append(50)
print("append ",num)

num.extend([60,70])
print("extended ",num)

num.insert(0,5)
print("inserted ",num)

num.remove(20)
print("removed ",num)

removed=num.pop(2)
print("popped ",removed)
print("removed by pop ",num)

position=num.index(10)
print("index of 10 ",position)

print("count of 10 is ",num.count(10))

num.sort()
print("sorted ",num)

num.reverse()
print("reversed ",num)

cleared=num.clear()
print("cleared ",num)