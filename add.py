#Ques 3
print("1. fibonacci \n2. Multiplication")
num=input("Enter the Choice")
if(num==1):
    a=input("Enter the number") 
    n1=0
    n2=1
    count=0
    while(count<a):
        print(n1)
        nth=n1+n2
        n1=n2
        n2=nth
        count+=1
elif(num==2): 
    a=input("Enter the number")
    n=1
    while(n<=10):
        print(a*n)
        n+=1
else: print("Invalid Option")
    