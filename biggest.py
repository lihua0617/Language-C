from cs50 import get_int

x = int(input("x : "))
y = int(input("y : "))
z = int(input("z : "))

if x < y:
    s = y
elif x >= y:
    s = x

if s < z:
    t = z
elif s >= z:
    t = s

print(f"the biggest is:{t}.")