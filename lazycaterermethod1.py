def fact(a): #function to calculate factorial
  if a==0:
    return 1
  else:
    return(a*fact(a-1))

n=int(input("Enter the maximum number of cuts to be made:"))
term1=0 #term1 =nC0
term2=0 #term2 for nC1
term3=0 #term3 for nC2
for i in range(0,n+1): #i is the loop counter
  finalterm=0 #to store the sum of term1,term2 and term3(substitution of formula)
  term1=int(fact(i)/(fact(i)*fact(0)))
  if i!=0:
    term2=int(fact(i)/(fact(i-1)*fact(1)))
    if(i!=1):
      term3=int(fact(i)/(fact(i-2)*fact(2)))
    else:
      term3=0
  else:
    term2=0
  finalterm=term1+term2+term3
  print("{}\t".format(finalterm),end="")