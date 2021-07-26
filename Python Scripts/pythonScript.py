filename = "program"+str(input("Enter Program Number :"))
iChoice = 1
while(iChoice != 0):
    print("Choose Language :")
    print("1. C")
    print("2. C++")
    print("3. java")
    print("4. python")
    print("0. Exit the Script")
    iChoice = int(input())

    if(iChoice == 1):
        filename+=".c"
        break
    elif(iChoice == 2):
        filename+=".cpp"
        break
    elif(iChoice == 3):
        filename+=".java"
        break
    elif(iChoice == 4):
        filename+=".py"
        break
    elif(iChoice == 0):
        break
    else:
        print("Invalid ! Enter Again !!\n")
if(iChoice != 0):
    file = open(filename,"w+")
    if(file.read() != None):
        print("File Already Exist !!")
    if(iChoice == 1):
        file.write("#include<stdio.h>\n\n\nint main()\n{\n\n\treturn 0;\n}")
    elif(iChoice == 2):
        file.write("#include<iostream>\n\n\nint main()\n{\n\n\treturn 0;\n}")
    elif(iChoice == 3):
        if(filename.endswith(".java")):
            filename = filename.replace(".java","")
        file.write("import java.util.*;\n\n\nclass "+filename+"\n{\n\tpublic static void main(String[] args)\n\t{\n\n\t}\n}")
file.close()


