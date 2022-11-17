import random
x = int(input('Enter the number of input for the list : '))
l = []
for i in range(x):
    r = random.randint(0,100)
    if r in range(1,6):
        l.append(r)
    elif r in range (6,31):
        l.append(r**2)
    else:
        continue
print(l)
