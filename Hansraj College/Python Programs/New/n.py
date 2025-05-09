def deci_to_bin(a):
    a = abs(a)
    s = ""
    while(a!=0):
        r = a%2
        s = str(r)+s
        a = a//2
    l = len(s)
    bi = "0"*(8-l)+s
    # check if number is negative
    return bi

def bit_right(a,b):
    m = deci_to_bin(a)
    r=""
    l=len(m)
    r=str(m[:(l-b)])+""
    r="0"*b+r
    return r

def main():
    x=int(input("Enter Number\n"))
    y=int(input("Enter Number\n"))
    print(bit_right(x,y))

if __name__=="__main__":
    main()

