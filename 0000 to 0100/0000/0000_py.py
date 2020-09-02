while True:
    n = input()
    if (n>0):
        break
str = raw_input()
text = ""
for i in range(n):
    if (str[i] >='a' and str[i] <= 'z'):
        text += chr((ord(str[i])+3 - ord('a'))%26+ord('a'))
    elif (str[i] >='A' and str[i] <= 'Z'):
		text += chr((ord(str[i])+3 - ord('A'))%26+ord('A'))
    else:
        text += str[i]
print(text)
