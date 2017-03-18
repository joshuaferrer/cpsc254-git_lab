     
'''
Son Nguyen
Lab 03/11/2017
'''

cont = 'Y'
while cont == 'Y' or cont == 'y':

    print("Speed of Sounds Moving in Substances:")
    print("1. Gasses")
    print("2. Liquids") 
    print("3. Solids")
    print('Enter type of substances(1-3):')
    substanceType = input()

    if substanceType == 1:
        fileName = 'gasses.dat'
    if substanceType == 2:
        fileName = 'liquids.dat'
    if substanceType == 3:
        fileName = 'solids.dat'
    inFile = open(fileName, 'r')
    content = list(inFile)

    idx = 0
    for aLine in content:
        aLine = [aLine.split() for aLine in content]
        print(str(idx + 1) + '. ' + aLine[idx][0])
        idx = idx + 1
    print("What substance of you choose (1 - " + str(idx) + "): ")
    substance = input()
    print("Speed of sound moving in " + aLine[substance-1][0] + ": " + aLine[substance-1][1])

    print("Continue (Y/N): ")
    cont = raw_input()
inFile.close()

