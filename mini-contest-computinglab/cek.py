def comp(n):
    return((n * (n + 1)) / 2)

i = 0
i = int(input())
while(comp(i) < int(1e18 + 1)):
    i = int(input())
    print(comp(i))
