import random
import math

def calculate_combination(n, k):
    return math.comb(n, k)

def generate_valid_n_k():
    rn_mx = 10**18
    while True:
        N = random.randint(1, 60)
        K = random.randint(1, rn_mx)
        
        if calculate_combination(N, K) <= 10**18:
            return N, K
        rn_mx = math.floor(rn_mx / 10)

N, K = generate_valid_n_k()
print(N, K)
