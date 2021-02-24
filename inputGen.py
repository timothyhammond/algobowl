#GENERAL FILE WRITING FUNCTIONS
def createFile(filename):
    file = open(filename, 'w')
    file.close()

def clearFile(filename):
    file = open(filename, 'r+')
    file.truncate(0)
    file.close()

def writeSeq(filename, seq):
    file = open(filename, 'w')
    for elem in seq:
        file.write(str(elem) + '\n')
    file.close()

def generateFile(filename, seq):
    createFile(filename)
    clearFile(filename)
    writeSeq(filename, seq)

#SEQUENCE GENERATION FUNCTIONS
def genLinearSeq(length):
    seq = []
    i = 1
    for i in range(length - 1):
        seq.append(i + 2)
    return seq

filename = input("Please enter the name of the input file: ")
print("Please choose what type of sequence to load into the file:")
print("Enter 1 for a linear sequence")
seqType = input()
seqLength = input("How long would you like your sequence?")
if(seqType == '1'):
    generateFile(filename, genLinearSeq(int(seqLength)))

print("Done")