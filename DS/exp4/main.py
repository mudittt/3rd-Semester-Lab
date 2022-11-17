import random
import statistics

z = int(input("enter the number of values: "))
p = int(input("enter the start of range: "))
y = int(input("enter the end of range: "))

list=[]
for i in range(1, z + 1):
    x = random.randint(p, y)
    list.append(x)

print("Generated List: ", list)
print("Largest value: ", max(list))
print("Smallest value: ", min(list))
print("Mode: ", statistics.mode(list))
print("Mean: ", statistics.mean(list))
print("Median: ", statistics.median(list))
