# cook your dish here
t = int(input())
for i in range(t):
    a1,a2,a3,b1,b2,b3 = map(int,input().split())
    alice_rolls=[a1,a2,a3]
    bob_rolls=[b1,b2,b3]
    alice_rolls.sort()
    bob_rolls.sort()
    alice=alice_rolls[1]+alice_rolls[2]
    bob=bob_rolls[1]+bob_rolls[2]
    if alice>bob:
        print("Alice")
    elif bob>alice:
        print("Bob")
    else:
        print("Tie")
