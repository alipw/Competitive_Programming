import random

# Generate N between 1 and 10^5
N = random.randint(1, 10)

# Generate N integers between 1 and 10^7
numbers = [random.randint(1, 20) for _ in range(N)]

# Output
print(N)
print(*numbers)
