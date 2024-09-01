a = 1
b = 2
c = 3
i = 1
print(a, end=" ")
print(b, end=" ")
print(c, end=" ")
# print(f"{i} -> {a}")
i += 1
# print(f"{i} -> {b}")
i += 1
# print(f"{i} -> {c}")
while(c <= 1e9):
    a = b
    b = c
    c = a + b
    i += 1
    # print(f"{i} -> {c}")
    print(c, end=" ")
