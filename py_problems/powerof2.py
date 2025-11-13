def powerof2(n):
    if n&(n-1)==0 and n!=0:
        return True
    else:
        return False

print(powerof2(16))  # Should return True
print(powerof2(18))  # Should return False