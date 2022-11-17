# while loop
print('\nWHILE ->')
n = int(input('Enter the number of elements you want of fibonacci series : '))
n1 = 0
n2 = 1
itr = 0
if n <= 0:
    print('Enter a positive number.')
elif n == 1:
    print(n1,end=' ')
else:
    while itr < n:
        print(n1,end=' ')
        n3 = n1+n2
        n1 = n2
        n2 = n3
        itr += 1

# nested loop
print('\n\nNESTED ->')
for i in range(1, 5):
    for j in range(i, 0, -1):
        print('* ', end='')
    print('\n')

# for loop
print('FOR ->')
subject = ["Foundations", "of", "data", "science"]
for x in subject:
    print(x, end=' ')
