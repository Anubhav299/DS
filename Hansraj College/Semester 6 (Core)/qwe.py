dividend = int(input("Enter the dividend: "))
divisor = int(input("Enter the divisor: "))
n = len(bin(divisor))-3  # calculate the length of the divisor in binary form, minus the "0b" prefix and 1 bit
div = bin(dividend)[2:] + (n-1)*'0'  # convert dividend to binary form and append (n-1) zeroes
print("Dividend after appending zeroes: ", div)

def xor_function(a,b):
    n = len(a)
    m = len(b)
    if(m!=n):
        if n<m:
            a = "0"*(m-n)+a
        else:
            b = "0"*(n-m)+b
    g=''
    for i in range(n):
        c = int(a[i])
        d = int(b[i])
        f = c^d
        g = g+str(f)
    return g 

k = div[:n]
for i in range(n, len(div)):
    print("Current value of k:", k)
    if k[0] == '0':
        p = xor_function(k, '0'*n)
    else:
        p = xor_function(k, bin(divisor)[2:])
    print("XOR result:", p[1:])
    k = p[1:] + div[i]

remainder = k
print("Remainder:", remainder)
if int(remainder, 2) == 0:
    print("No error detected.")
else:
    print("Error detected in transmission.")
