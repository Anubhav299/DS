x = int(input("Enter x "))
y = int(input("Enter y "))
def deci_to_bin(a):
    a = abs(a)
    s = ""
    while(a!=0):
        r = a%2
        s = str(r)+s
        a = a//2
    l = len(s)
    bi = "0"*(16-l)+s
    return bi

def bin_two(f):
    w = ""
    rev = f[::-1]
    l = len(f)
    c = rev.find('1')
    for i in range(0,l-c-1):
        if f[i] == "0":
            w = w + "1"
        else:
            w = w + "0"
    w = w + f[l-c-1:l]
    return w

def bit_and(a,b):
    m = deci_to_bin(a)
    n = deci_to_bin(b)
    if a < 0:
        m = bin_two(m)
    if b<0:
        n = bin_two(n)
    w = ""
    for i in range(0,len(m)):
        if ((int(m[i]) == 1) and (int(n[i])==1)):
            w = w + "1"
        else:
            w = w + "0"
    if int(w[0]) == 1:
        w = '-0b'+bin_two(w)
        
    return w

a = bit_and(x,y)
print("Answer-- ",a)


