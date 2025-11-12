def fibonacci(n):
    if n < 0:
        raise ValueError("Input should be a non-negative integer.")
    elif n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)
    

# Example usage:
print(fibonacci(10))  # Should return 55
# You can test the function with different values of n
print(fibonacci(5))   # Should return 5
print(fibonacci(7))   # Should return 13