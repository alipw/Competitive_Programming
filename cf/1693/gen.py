import random

def generate_sequence(length):
    if length % 2 != 0:
        raise ValueError("Length must be even to have equal number of 'l' and 'r'")
    
    sequence = ['l'] * (length // 2) + ['r'] * (length // 2)
    random.shuffle(sequence)
    return ''.join(sequence)

# Example usage
try:
    sequence_length = int(input("Enter the desired length of the sequence (must be even): "))
    result = generate_sequence(sequence_length)
    print(f"Random sequence: {result}")
    print(f"Number of 'l's: {result.count('l')}")
    print(f"Number of 'r's: {result.count('r')}")
except ValueError as e:
    print(f"Error: {e}")
