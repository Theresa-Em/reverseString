def reverse(s):
    n = len(s)
    tmpstack = []
    for i in range(n):
        tmpstack.append(s[i])
    outs = ""
    for i in range(n-1, -1, -1):
        outs += tmpstack.pop()
    return outs


print(reverse("hello"))