import random

when = ['A long time ago', 'Yesterday', 'Before you were born', 'In future', 'Before Thanos arrived']
who = ['Shazam', 'Iron Man', 'Batman', 'Superman', 'Captain America']
went = ['Arkham Asylum', 'Gotham City', 'Stark Tower', 'Bat Cave', 'Avengers HQ']
what = ['to eat a lot of cakes', 'to fight for justice', 'to steal ice cream', 'to dance']


print(random.choice(when) + ', ' + random.choice(who) + ' went to ' + random.choice(went) + ' ' + random.choice(what) + '.')

when2 = ['A few years ago', 'Yesterday', 'Last night', 'A long time ago']
who2 = ['a rabbit', 'an elephant', 'a mouse', 'a turtle']
name = ['Ali', 'Miriam', 'Hoouk', 'Starwalker']
residence = ['Barcelona', 'Germany', 'Venice', 'England']
went2 = ['cinema', 'university', 'school', 'laundry']
happened = ['made a lot of friends', 'found a secret key', 'solved a mistery', 'wrote a book']

print( random.choice(when2) + ', ' + random.choice(who2) + ' that lived in ' + random.choice(residence) + ', went to the ' + random.choice(went2) + ' and ' + random.choice(happened))
