def reverse_string(s):
    rev = ""
    for ch in s:
        rev = ch + rev
    return rev

# Main Program
string = input("Enter a string: ")
result = reverse_string(string)
print("Reversed string:", result)
