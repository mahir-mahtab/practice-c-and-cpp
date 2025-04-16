import random
import sys
import cowsay

# coin=random.randint(1,10)
# cards=range(10)
# print(cards)
# print(coin)

# from random import choice
# coin=choice(["heads","tails"])
# print(coin)
# try:
#     print("hello",sys.argv[1])
# except IndexError:
#     print("wow")

if len(sys.argv)==2:
    cowsay.trex("hello,"+sys.argv[1])

