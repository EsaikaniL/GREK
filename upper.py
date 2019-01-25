//esai
def CamelCase(string):
    import re
    return ' '.join(x.capitalize() or '_' for x in string.split('_'))
print(CamelCase=str(input()))
