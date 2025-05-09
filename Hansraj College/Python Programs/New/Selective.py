def invert(a):
    if a =="1":
        return "0"
    return "1"
 
def selective_set(a,b):
    w = ""
    l = len(a)
    for i in range(0,l):
        if int(b[i]) == 1:
            w = w + "1"
            # print("Yess",w)
        else:
            w = w + a[i]
            # print(w)
    return w
 
def selective_comp(a,b):
    w = ""
    l = len(a)
    for i in range(0,l):
        if int(b[i]) == 1:
            w = w + invert(a[i])
            # print("Yess",w)
        else:
            w = w + a[i]
            # print(w)
    return w
 
def selective_clear(a,b):
    w = ""
    l = len(a)
    for i in range(0,l):
        if int(b[i]) == 1:
            w = w + "0"
            # print("Yess",w)
        else:
            w = w + a[i]
            # print(w)
    return w
 
def mask(a,b):
    w = ""
    l = len(a)
    for i in range(0,l):
        if int(b[i]) == 0:
            w = w + "0"
            # print("Yess",w)
        else:
            w = w + a[i]
            # print(w)
    return w
 
a = input("enter the a ")
b = input("enter the b ")
print("Resultant a is  ",selective_set(a,b))
print("Resultant selective_comp ",selective_comp(a,b))
print("Resultant selective_clear ",selective_clear(a,b))
print("Resultant mask ",mask(a,b))
