DNA Sequencing Alignment 

Name: Tashia Boddu 
Hours to complete assignment: 6 Hours
---------------------------------------------------------------------------------------

I decided to use dynamic programming since this was the solution I understood the most in the pdf and made most sense in terms of it's advatages. The idea is to be able to
break up a large problem into smaller chunks and store the smaller solutions seperately. This is also an optimization over the recursive solution. Although this solutions does come with some disadvantages, one of them not being able to work with cases that require large amounts of RAM. 
---------------------------------------------------------------------------------------

Code does not work for endgaps7.txt

Input: atattat-, -tattata
Expected output:
a - 2
t t 0
a a 0
t t 0
t t 0
a a 0
t t 0
- a 2
What Happened: 
a - 1
t t 0
a a 0
t t 0
t t 0
a a 0
t t 0
- a 1
---------------------------------------------------------------------------------------

My computer has 8GB of RAM which means this can be limiting when it comes to running files that are memory intensive. 
---------------------------------------------------------------------------------------

a = 4 (size of int)
b = 2 (N x N matrix that allocates N^2 ints)
largest N = 44,721

8,000,000,000 >= 4 * N^2
8,000,000,000 / 4 >= N^2
sqrt(8,000,000,000 / 4) >= N^2
44,721.36 >= N
44,721 is the largest possible size
---------------------------------------------------------------------------------------

I can run valgrind successfully and I have included a screenshot called output.png. There are no memory leaks so far!
---------------------------------------------------------------------------------------

data file        distance        time        memory
ecoli2500.txt    118             0.35        25 MB
ecoli5000.txt    160             1.37        96 MB
ecoli7000.txt    194             3.12        187 MB
ecoli10000.txt   223             5.89        383 MB
ecoli20000.txt   3135            25.42       1537 MB
ecoli28284.txt   -               -           - 
--------------------------------------------------------------------------------------

I did not use lambda expression
--------------------------------------------------------------------------------------

Tutor: Ben F.
---------------------------------------------------------------------------------------

Serious problems involved not running endgaps7 and the larger files such as ecoli28284
---------------------------------------------------------------------------------------
