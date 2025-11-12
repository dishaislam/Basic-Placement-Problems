def dec2binary(n):
    if n == 0:
        return "0"
    
    binary_digits = []
    while n > 0:
        remainder = n % 2
        binary_digits.append(str(remainder))
        n = n // 2
    
    binary_digits.reverse()
    return ''.join(binary_digits)

print(dec2binary(4))  # Should return '1010'