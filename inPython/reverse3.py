def reverse(s):
    slist = list(s)
    slist.reverse()
    outs = "".join(slist)
    return outs

'''convert the input string to a list, 
use Python inbuilt function to reverse a list,
convert it back to string as output'''

print(reverse(input()))