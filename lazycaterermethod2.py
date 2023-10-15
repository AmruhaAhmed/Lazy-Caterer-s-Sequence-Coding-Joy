i=0 #loop counter
n=int(input("Enter the maximum number of cuts to be made:"))
print("The lazy caterer's Sequence is ...")
while i<=n:
  temp=int(((i*i)+i+2)/2) #temporary variable
  print("{}\t".format(temp),end="")
  i=i+1