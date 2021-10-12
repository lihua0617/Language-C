from cs50 import get_int

x = int(input("x : "))
y = int(input("y : "))
print(f"x is:{x} , y is:{y}.")

t = x
x = y
y = t
print(f"x is:{x} , y is:{y}.")