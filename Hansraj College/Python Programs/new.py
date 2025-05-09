n = int(input("Enter Number : "))
i=0
d=0
while(n!=0):
    r=n%10
    d+=r*(2**i)
    i+=1
    n=n//10
print("\n")
print("Decimal ", d)
