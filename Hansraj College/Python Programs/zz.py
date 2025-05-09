##def deci_to_bin(a):
##    a = abs(a)
##    s = ""
##    while(a!=0):
##        r = a%2
##        s = str(r)+s
##        a = a//2
##    l = len(s)
##    bi = "0"*(16-l)+s
##    # check if number is negative
##    return bi
##
###def bit_left(a,b):
###    m = deci_to_bin(a)
###    n = deci_to_bin(b)
###    r = ""+str(m[b:])
###    print(r)
###    l = len(m)
###    r = r+"0"*(b)
###    print(r)
###    return int(r,2)
##
##def bit_left(a,b):
##    m = deci_to_bin(a)
##    n = deci_to_bin(b)
##    r = ""+str(m[b:])
##    print(r)
##    l = len(m)
##    r = r+"0"*(b)
##    print(r)
##    return int(r,2)
##
##def main():
##    x = int(input("Enter Number - "))
##    y = int(input("Enter Number - "))
##    print(bit_left(x,y))
##    
##if __name__=="__main__":
##    main()

print('-0b')

