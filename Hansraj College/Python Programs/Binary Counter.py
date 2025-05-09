### BINARY UP AND DOWN COUNTER
def check_bin(a):
    f = 0
    for i in a:
        if int(i) != 0 and int(i) != 1:
            f = 1
    return f
 
def invert(a):
    if a =="1":
        return "0"
    return "1"
 
def count_up(b):
    l = len(b)
    w = "" + invert(b[l-1])
    for i in range(l-2,-1,-1):
        if int(b[i+1]) == 1:
            w = invert(b[i]) + w
        elif int(b[i+1]) == 0:
            w = b[:i+1]+w
            break
    print("Up counter is ",w)
    print("Original number {} and counter up number {} ".format(int(b,2),int(w,2)))
 
def count_dn(b):
    l = len(b)
    w = "" + invert(b[l-1])
    for i in range(l-2,-1,-1):
        if int(b[i+1]) == 0:
            w = invert(b[i]) + w
        elif int(b[i+1]) == 1:
            w = b[:i+1]+w
            break
    print("Down counter is ",w)
    print("Original number {} and counter down number {} ".format(int(b,2),int(w,2)))
 
 
ch = 0
while(ch != 3):
    print()
    print("1. Binary Up Counter ")
    print("2. Binary Down Counter ")
    print("3. EXIT \n")
    ch = int(input("Enter the choice "))
    if (ch == 1):
        d = input("Enter the binary Number-- ")
        k = check_bin(d)
        if k == 1:
            print("Number is not binary.")
        else:
            count_up(d)
    elif (ch == 2):              
        p = input("Enter the binary Number-- ")
        l = check_bin(p)
        if l == 1:
            print("Number is not binary.")
        else:
            count_dn(p)
    elif (ch == 3):
        break
    else:
        print("Invalid Choice")
