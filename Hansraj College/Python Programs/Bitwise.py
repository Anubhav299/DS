def deci_to_bin(a):
    a = abs(a)
    s = ""
    while(a!=0):
        r = a%2
        s = str(r)+s
        a = a//2
    l = len(s)
    bi = "0"*(16-l)+s
    # check if number is negative
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
    return int(w,2)


def bit_or(a,b):
    m = deci_to_bin(a)
    n = deci_to_bin(b)
    if a < 0:
        m = bin_two(m)
    if b<0:
        n = bin_two(n)
    w = ""
    for i in range(0,len(m)):
        if ((int(m[i]) == 1) or (int(n[i])==1)):
            w = w+"1"
        else:
            w = w+"0"
    if int(w[0]) == 1:
        w = '-0b'+bin_two(w)
    return int(w,2)

def bit_xor(a,b):
    m = deci_to_bin(a)
    n = deci_to_bin(b)
    if a < 0:
        m = bin_two(m)
    if b<0:
        n = bin_two(n)
    w = ""
    for i in range(0,len(m)):
        if (int(m[i]) != int(n[i])):
            w = w+"1"
        else:
            w = w+"0"
    if int(w[0]) == 1:
        w = '-0b'+bin_two(w)
    return int(w,2)


def bit_comp(a):
    m = deci_to_bin(a)
    w = ""
    for i in range(0,len(m)):
        if (int(m[i]) == 1):
            w = w+"0"
        else:
            w = w+"1"
    if a>0:
        w = '-0b'+bin_two(w)
    return int(w,2)


def bit_left(a,b):
    m = deci_to_bin(a)
    n = deci_to_bin(b)
    r = ""+str(m[b:])
    print(r)
    l = len(m)
    r = r+"0"*(b)
    print(r)
    return int(r,2)


def bit_rgt(a,b):
    m = deci_to_bin(a)
    n = deci_to_bin(b)
    l = len(m)
    q = ""+ str(m[:(l-b)])
    q = "0"*b+q
    return int(q,2)


# Using the bitwise operators 
ch =0
while (ch != 3):
    print()
    print("1. With inbuilt")
    print("2. With Functions")
    print("3. EXIT")
    ch = int(input("Enter the choice "))
    if ch == 1:
        j=0
        while(j != 7):
            print()
            print("1. AND operator ")
            print("2. OR operator")
            print("3. XOR operator")
            print("4. Complement")
            print("5. Right shift")
            print("6. Left shift")
            print("7. EXIT")
            j = int(input("Enter the desired operator -- "))
            if j == 1:
                x = int(input("Enter x "))
                y = int(input("Enter y "))
                a = x&y
                print("Answer -- ",a)
            elif j == 2:
                x = int(input("Enter x "))
                y = int(input("Enter y "))
                a = x|y
                print("Answer -- ",a)
            elif j ==3:
                x = int(input("Enter x "))
                y = int(input("Enter y "))
                a = x^y
                print("Answer -- ",a)
            elif j ==4:
                x = int(input("Enter number to be complemented "))
                a = ~x
                print("Answer -- ",a)
            elif j == 5:
                x = int(input("Enter x "))
                y = int(input("Enter y "))
                a = x>>y
                print("Answer -- ",a)
            elif j == 6:
                x = int(input("Enter x "))
                y = int(input("Enter y "))
                a = x<<y
                print("Answer -- ",a)
            elif j ==7:
                print("**"*40)
                break
            else:
                print("Invalid choice")
    elif ch == 2:
        j=0
        while(j != 7):
            print()
            print("1. AND operator ")
            print("2. OR operator")
            print("3. XOR operator")
            print("4. Complement")
            print("5. Right shift")
            print("6. Left shift")
            print("7. EXIT")
            j = int(input("Enter the desired operator -- "))
            if j == 1:
                x = int(input("Enter x "))
                y = int(input("Enter y "))
                a = bit_and(x,y)
                print("Answer -- ",a)
            elif j == 2:
                x = int(input("Enter x "))
                y = int(input("Enter y "))
                a = bit_or(x,y)
                print("Answer -- ",a)
            elif j ==3:
                x = int(input("Enter x "))
                y = int(input("Enter y "))
                a = bit_xor(x,y)
                print("Answer -- ",a)
            elif j ==4:
                x = int(input("Enter number to be complemented "))
                a = bit_comp(x)
                print("Answer -- ",a)
            elif j == 5:
                x = int(input("Enter x "))
                y = int(input("Enter y "))
                a = bit_rgt(x,y)
                print("Answer -- ",a)
            elif j == 6:
                x = int(input("Enter x "))
                y = int(input("Enter y "))
                a = bit_left(x,y)
                print("Answer -- ",a)
            elif j ==7:
                print("**"*40)
                break
            else:
                print("Invalid choice")
    elif ch == 3:
        break
    else:
        print("Invalid choice")
