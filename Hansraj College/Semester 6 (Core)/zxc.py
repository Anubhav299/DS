dividend = input("Enter the dividend: ")
divisor = input("Enter the divisor: ")
n = len(divisor)
div = dividend + (n-1)*'0' 
print(div)

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

# print(xor_function('1011','111'))
i=0
k = div[i:i+3]
for i in range(len(div)):
    print("value now ",k)
    if(k[0]== 0):
        p = xor_function(k,"0"*n)
    else:
        p = xor_function(k,divisor)
    print("xor",p[1:])
    i = i +len(divisor)
    print("i value",i)
    k = p[1:]+div[i]
    
print("remiander",k)
