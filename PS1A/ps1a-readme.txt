Linear FeedBack Shift Register PS1a

Name: Tashia Boddu
Hours to complete assignment: 6hrs
-------------------------------------------------------------------------------
The assignmets requires us to store a string of 16 bits in a register of some sort. In this assignemt I had to shift every bit one place to the left and replace the right most bit with a result that was XORed with 3 tap positions, 15, 13, 12, and 10. 

-------------------------------------------------------------------------------
I decided to use a Vector for my register because it would be easy to push_backthe newest bit without shifting everything over to the left. Instead of shifting, I erase the leftmost bit and push_back the result. 

-------------------------------------------------------------------------------
In my first test case, I am testing the step() function to make sure it is XORing the bits as needed and replaing the rightmostbit with the result. In my second test case, I do the same as the first but I also test the generate() function to make sure it is taking the bits from the result k times and converting them into a deciaml number. 

-------------------------------------------------------------------------------Help from tutors: Ben F and Joseph C. 

------------------------------------------------------------------------------
Problems with Makefile working properly 
