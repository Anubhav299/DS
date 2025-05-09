import random
 
def xor_fun(a,b):
    n=len(a)
    m=len(b)
    if(n!=m):
        if(n<m):
            a="0"*(m-n)+a
        else:
            b="0"*(n-m)+b
    g=''
    for i in range(n):
        c=int(a[i])
        d=int(b[i])
        f=c^d
        g=g+str(f)
    return g

def ans(k):
    if(k[0] == '0'):
        p=xor_fun(k,'0'*n)
    else:
        p=xor_fun(k,divisor)
    return p

def generate_error(x):
    if random.random() <0.5:
        patch=""
        e=random.randint(0,len(x)-1)
        error=int(x[e])^1
        for j in range(len(x)):
            if j==e:
                patch+=str(error)
            else:
                patch+=str(x[j])
        return patch
    else:
        return x
    

def get_rem(div,divisor):
    i=0
    k=div[i:i+n]
    l=len(div)
    for i in range(len(div)):
        y = ans(k)
        i = i + len(divisor)





dividend = input("Enter the dividend: ")
