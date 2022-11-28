def reverse(s):
    slist = list(s)
    slist.reverse()
    outs = "".join(slist)
    return outs


print(reverse("hello"))