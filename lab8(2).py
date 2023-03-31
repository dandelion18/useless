def task2(tList,nList):
    for z in tList:
        if type(z) == list:
            task2(z,nList)
        else:
            nList.append(z)
    return nList
def main():
    oList = ['a',['b','a',['k','z','aa',['xz','yz']]],'b']
    nList=[]
    nList = task2(oList,nList)
    print(oList)
    print(nList)
if __name__ == "__main__":
    main()
