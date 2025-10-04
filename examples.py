
def print_dict(dct):
    tab = '\t'
    nothing = ''
    print("{")
    for key in dct.keys():
        print(f"  '{key}'\t{tab if len(key)<4 else nothing}: '{dct[key]}',")
    print("}")
       
 
f = open("index.txt","r")
data = f.read()
print(data)

