t = int(input())
for i in range(t):
	fin = 0
	c=0
	l1=[]
	l2=[]
	s1 = ""
	s2 = ""
	n,m = input().split()
	l1 = [ int(x) for x in input().split()]
	s1 = input()
	l2 = [int(y) for y in input().split()]
	s2 = input()
	for el in l2:
		if el in l1:
			c = c + 1
	fin = ( ord(s1[c-1]) ^ ord(s2[c-1]) )
	print(format(fin,'b'))