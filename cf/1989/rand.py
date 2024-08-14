import random
import string

def generate_random_string(length):
    return ''.join(random.choice(string.ascii_lowercase) for _ in range(length))

def generate_test_cases():
    t = random.randint(1, 10**3)
    print(t)

    for _ in range(t):
        len_a = random.randint(1, 100)
        len_b = random.randint(1, 100)
        
        a = generate_random_string(len_a)
        b = generate_random_string(len_b)
        
        print(a)
        print(b)

generate_test_cases()
