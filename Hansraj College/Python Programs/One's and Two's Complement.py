def dtob(n):
    s=""
    while(n!=0):
        r=n%2
        s = str(r)+s
        n=n//2
    l=len(s)
    return "0"*(8-l)+s
def ones(a):
    o=""
    for i in a:
        if(i=='0'):
            o+='1'
        else:
            o+='0'
    return o

def twos(b):
    t=""
    c=0
    l = len(b)
    for i in b[: :-1]:
        if(i=='0' and c==0):
            t='0'+t
        elif(i=='1' and c==0):
            t='1'+t
            c=1
        elif(i=='1' and c==1):
            t='0'+t
        elif(i=='0' and c==1):
            t='1'+t

    return t

def main():
    n=int(input("Enter Decimal Number : "))
    r=dtob(n)
    print("Binary Conversion ", r)
    p=ones(r)
    print("One's Complement", p)
    q=twos(r)
    print("Two's Complement", q)
if __name__=="__main__":
    main()
