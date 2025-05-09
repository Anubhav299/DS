def check_bin(a):
    f = 0
    for i in (a):
        if int(i)!= 0 and int (i)!= 1:
            f = 1
    return f
def invert(a):
    if a == "1":
        return"0"
    return"0"

def counter_up(b):
    l = len(b)
    w = "" + invert(b[l-1])
    for i in range(l-2,-1,-1):
        if int(b[i+1]) == 1:
            w = invert(b[i]) + w
        elif int(b[i+1]) == 0:
            w = b[:i+1] + w
            break
    return w

def counter_down(b):
    l = len(b)
    w = "" + invert(b[l-1])
    for i in range(l-2,-1,-1):
        if int(b[i+1]) == 0:
            w = invert(b[i]) + w
        elif int(b[i+1]) == 1:
            w = b[:i+1] + w
            break
    return w

def main():
    n = input("enter a number")
    l = check_bin(n)
    if l == 1:
        print("no not binary")
    else:
        print(counter_up(n))
        print(counter_down(n))
if __name__=="__main__":
    main()
