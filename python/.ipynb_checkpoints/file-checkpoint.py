
name = input("whats your name ")

# file=open("name.txt","a")
# file.write(name+" ")
# file.close()
with open("name.txt","r") as file:
    # file.write(f"{name}")
   for line in file:
       print("hello",line)
        
    