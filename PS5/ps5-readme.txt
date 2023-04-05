/**********************************************************************
 *  ps5-readme 
 *  Recursive Graphics (Triangle Fractal)                       
 **********************************************************************/

Your name: Tashia Boddu

Hours to complete assignment: 3hrs 

/**********************************************************************
 *  Briefly discuss the assignment itself and what you accomplished.
 **********************************************************************/
In this assignment I created a recursive function that called itself
until the depth reached 0 and drew traingles accordingly. 

 /**********************************************************************
 *  Discuss one or more key algorithms, data structures, or 
 *  OO designs that were central to the assignment.
 **********************************************************************/
I used VertexArray to draw the individual tiangles themselves and I
stored each of those triangles in a vertex of type Triangle. And I
would repeat this process recursively until depth hit 0. 

/**********************************************************************
 *  Briefly explain the workings of the features you implemented.
 *  Include code excerpts.
 **********************************************************************/
fTree(triangles, length / 2, depth - 1, xcenter_a, ycenter_a);
fTree(triangles, length / 2, depth - 1, xcenter_b, ycenter_b);
fTree(triangles, length / 2, depth - 1, xcenter_c, ycenter_c);

For this part of the code I recursively call fTree three times b/c
each depth involves a total of 4 triangles to be drawn. By 
calculating the centers of each of the 3 smaller triangles I am 
able to draw the 3 smaller triangles with the big one. 

 /**********************************************************************
 *  Briefly explain what you learned in the assignment.
 **********************************************************************/
I learnt how to use recursive functions again. 

/**********************************************************************
 *  List whatever help (if any) you received from the instructor,
 *  classmates, or anyone else.
 **********************************************************************/
Tutors: Ben F. 
classmates: Seyedsepehr Madani 

/**********************************************************************
 *  Describe any serious problems you encountered.  
 *  If you didn't complete any part of any assignment, 
 *  the things that you didn't do, or didn't get working.                  
 **********************************************************************/
No serious problems 

/**********************************************************************
 *  List any other comments here.                                     
 **********************************************************************/