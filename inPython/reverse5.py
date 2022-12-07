def reverse(s):
    slist = list(s)
    left, right = 0, len(slist)-1
    while left <= right:
        slist[left], slist[right] = slist[right], slist[left]
        left += 1
        right -= 1
    return "".join(slist)

#convert the string to list and using two pointers to reverse the list

print(reverse(input()))