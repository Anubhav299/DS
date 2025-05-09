b1=int(input("Enter the base of number: "))
b2=int(input("Enter the target base: "))
n=input("Enter number: ")
dec=0
pow=1
length = len(n)
for i in range(length-1,-1,-1):
    if(n[i]>='0' and n[i]<='9'):
        a=int(n[i])
    else:
        a=ord(n[i])-55 # string to int
    dec = dec + pow*a
    pow = pow*b1
print("Decimal ",dec)
 
ans = ""
while dec>0:
    d=dec%b2
    if(d>9):
        c = chr(d+55) # int to string
    else:
        c = str(d)
    ans=c+ans
    dec=dec//b2
print(ans)
