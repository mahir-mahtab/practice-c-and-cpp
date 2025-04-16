while True:
    try:
        x=int(input("x="));
    except ValueError:
        print("x is not a integer")#pass 
    else:
        print(f"x is {x}");
        break;
    