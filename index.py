
def getData():
    D = {}
    while True:
        studentId = input("Enter a student ID: ")
        marksList = input("Enter the marks : ")
        moreStudents = input("Enter yes/no for adding more : ")
        if studentId in D :
            print(studentId, "is already inserted.")
        else:
            D[studentId] = marksList.split(",")
        if moreStudents.lower()=="no":
            return D


print(getData())