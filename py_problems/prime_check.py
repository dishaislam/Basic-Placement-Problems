def prime(n):
    if n <= 1:
        return False
    
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

number = 29
if prime(number): 
    print(f"{number} is a prime number.")
else:
    print(f"{number} is not a prime number.")


def n_primes(count):
    primes = []
    num = 2
    while len(primes) < count:
        if prime(num):
            primes.append(num)
        num += 1
    return primes

# Example usage:
print(n_primes(10))  # Should return the first 10 prime numbers