def twos(a):
    t=""
    c=0
    for i in a[::-1]:
        if(i=='0' and c==0):
            t='0'+t
        elif(i=='1' and c==0):
            t='1'+t
            c=1
        elif(i=='0' and c==1):
            t='1'+t
        elif(i=='1' and c==1):
            t='0'+t
    return t


def add(a,b):
    l = len(a)
    sum = 0
    carry = 0
    add = ""
    for i in range(l-1,-1,-1):
        sum = int(a[i])+int(b[i])+carry
        if sum == 2:
            sum =0
            carry = 1
        elif sum == 3:
            sum = 1
            carry = 1
        else:
            carry =0
        add = str(sum)+add
    if carry >0:
        add= str(carry)+add
    return add
 
 
def sub(a,b):
    l = len(a)
    b = bin_two(b)
    r = add(a,b)
    if len(r)>l:
        return r[1:]
    else:
        return "-0b"+bin_two(r)
   
 
ch = 0
while(ch != 3):
    print()
    print("1. Addition of binary numbers ")
    print("2. Subtraction of two numbers ")
    print("3. EXIT ")
    ch = int(input("Enter your choice "))
    if ch == 1:
        x = input("Enter the Augend -- ")
        y = input("Enter the Addend -- ")
        m = len(x)
        n = len(y)
        if m>n:
            y = "0"*(m-n)+y
        else:
            x = "0"*(n-m)+x
        print("Augend ",int(x,2))
        print("Addend ",int(y,2))
        print("Addition of binary numbers {} \n In decimal form {} ".format(add(x,y),int(add(x,y),2)))
    elif ch == 2:
        x = input("Enter the minuend -- ")
        y = input("Enter the subtrahend -- ")
        m = len(x)
        n = len(y)
        if m>n:
            y = "0"*(m-n)+y
        else:
            x = "0"*(n-m)+x
        print("Minuend",int(x,2))
        print("Subtrahend",int(y,2))
        print("Substraction of numbers {} \n In decimal form {} ".format(sub(x,y),int(sub(x,y),2)))
    elif ch == 3:
        break
    else:
        print(" Invalid Choice ")
