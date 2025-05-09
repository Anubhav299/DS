def dtob(n):
    s=""
    while(n!=0):
        r=n%2
        s = str(r)+s
        n=n//2
    l=len(s)
    bi="0"*(16-l)+s
    return bi

def ones(v):
    o=""
    for i in v:
        if(i=='0'):
            o+='1'
        else:
            o+='0'
    return o

def twos(b):
    t=""
    c=0
    for i in b[::-1]:
        if(i=='0' and c == 0):
            t='0'+t
        elif(i=='1' and c==0):
            t='1'+t
            c=1
        elif(i=='0' and c==1):
            t='1'+t
        elif(i=='1' and c==1):
            t='0'+t
    return t

def display(c):
    a=""
    for i in range(0,len(c)):
        a=a+c[i]
        if (i+1)%4==0:
            a=a+" "
    return a

def main():
    x=int(input("Enter Number - "))
    z=dtob(x)
    print("Binary Equivalent - ", display(z))
    print("One's Complement  - ", display(ones(z)))
    print("Two's Complement  - ", display(twos(z)))
    
if __name__=="__main__":
    main()
