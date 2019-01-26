//esai
def removeSpaces(string):
    count = 0
    list = []
    for i in xrange(len(string)):
        if string[i] != ' ':
            list.append(string[i])

    print(toString(list))
def toString(List):
    print(''.join(List))
string =str(input())
print removeSpaces(string)
