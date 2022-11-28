def reverse(s):
    rs = ""
    for c in s:
        rs = c + rs
    return rs 


print(reverse(input()))

