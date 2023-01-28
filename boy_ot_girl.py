name=input()
name2=set()

for i in name:
    name2.add(i)
    
if len(name2) % 2 != 0:
    print("IGNORE HIM!")
else:
    print("CHAT WITH HER!")       