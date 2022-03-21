def checking(uname , pw):
    if(uname=="hello@gmail.com" and pw==123123):
        return True
    else:
        return False

#Main
uname=input("Enter First number :")
pw=int(input("pw:"))

result=checking(uname, pw)

if(result):
    print(" Welcome")
else:
    print(" Try Again!")

# for i in range(2,20,2):
#     for ii in range(2,20):
#         print("Hi",i+ii)
