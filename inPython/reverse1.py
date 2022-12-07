def reverse(s):
    rs = ""
    for c in s:
        rs = c + rs
    return rs 


#print out a new string, using space O(n), time O(n)

#create an entry for the function
if __name__ == "__main__":
    print(reverse(input()))


