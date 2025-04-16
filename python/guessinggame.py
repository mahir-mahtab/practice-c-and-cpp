import random
y=random.randint(1,100)
while True :
    try :
        x=int(input("guess x between 1 t0 100"))
    except :
        print("invalid")
        continue
    if x>y:
        print("too high")
    elif x<y:
        print("too low")
    elif x==y:
        print("hurrah")
        break
    elif x>100 and x<1:
        print("invalid")
        
        
        
    