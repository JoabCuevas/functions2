#1
def max_of_two(x,y):
  if x > y:
    return x
  return y

def max_of_three(x,y,z):
  return max_of_two(x,max_of_two(y,z))

print(max_of_three(4,3,2))

#2
def sum(num):
    total =0
    for x in num:
      total += x
    return total
print (sum( ( 8, 2, 3, 0, 7)))

#3
def mul(num):
    total = 1
    for x in num:
      total *= x
    return total
print (mul( ( 8, 2, 3, -1, 7)))

#4
def string_r(str1):

    rstr1 = ''
    index = len(str1)
    while index > 0:
        rstr1 += str1[ index - 1 ]
        index = index - 1
    return rstr1
print(string_r('ruojnob'))

#5
def factor1(n):
  fac = 1
  for i in range(1,n+1):
    fac = fac*i
#    print(fac)
  return fac

print(factor1(5))

#6
def hola_range(n):
    if n in range(1,100):
        print( " %s is in range"%str(n))
    else:
        print ("%s is not in range"%str(n))
hola_range(1000)

#7
def string_test(s):
    d={"UPPER_CASE":0, "LOWER_CASE":0}
    for c in s:
        if c.isupper():
           d["UPPER_CASE"]+=1
        elif c.islower():
           d["LOWER_CASE"]+=1
    print ("Original String : ", s)
    print ("# of Upper case characters : ", d["UPPER_CASE"])
    print ("# of Lower case Characters : ", d["LOWER_CASE"])

string_test('Hello World')

#8
def list(T):
  x = []
  for a in T:
    if a not in x:
      x.append(a)
  return x
print(list([1,2,1,2,3,4,32,4,4]))

#9
def prime(n):
    if (n==1):
        return False
    elif (n==2):
        return True;
    else:
        for x in range(2,n):
            if(n % x==0):
                return False
        return True             
print(prime(36))

#10
def evennum(E):
    num = []
    for n in E:
        if n % 2 == 0:
            num.append(n)
    return num
print(evennum([10,12,56,13,45]))

#11
def pnumber(n):
    sum = 0
    for x in range(1, n):
        if n % x == 0:
            sum += x
    return sum == n
print(pnumber(3))

#12
def Palindrome(string):
	left_pos = 0
	right_pos = len(string) - 1
	while right_pos >= left_pos:
		if not string[left_pos] == string[right_pos]:
			return False
		left_pos += 1
		right_pos -= 1
	return True
print(Palindrome('anitalavalatina'))