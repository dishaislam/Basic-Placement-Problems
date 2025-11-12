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
def binary2dec(b):
    decimal_value = 0
    binNum=b 
    pow=1
    while binNum>0:

        rem=binNum%10
        decimal_value+=rem*pow

        pow=pow*2
        binNum=binNum//10
    
    return decimal_value
print(dec2binary(4))  # Should return '1010'
print(binary2dec(1010))  # Should return 10