def dtob(n):
    b=""
    while(n!=0):
        b=str(n%2)+b
        n=n//2
    return b

def ones(b):
    o=""
    for i in b:
        if(i=='0'):
            o+='1'
        else:
            o+='0'
    return o

def twos(b):
    
    
def main():
    n=int(input("Enter Number - "))
    binary = dtob(n)
    print(binary)
    print(ones(binary))

if __name__=="__main__":
    main()
