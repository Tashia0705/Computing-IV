/**********************************************************************
 *  readme.txt template                                                   
 *  Synthesizing a Plucked String Sound:
 *  CircularBuffer implementation with unit tests and exceptions 
 **********************************************************************/

Name: Tashia Boddu


Hours to complete assignment: 4 hrs

/**********************************************************************
 *  Briefly discuss the assignment itself and what you accomplished.
 **********************************************************************/
I created functions that would accomodate the use of a queue: such 
as enqueue dequele and returning the size of the queue. 

/**********************************************************************
 *  Discuss one or more key algorithms, data structures, or 
 *  OO designs that were central to the assignment.
 **********************************************************************/
The main part of the assignment was using a queue in the form of 
an array. This array was a private data memeber for the class 
CircularBuffer and served as the buffer itself. 

/**********************************************************************
 *  Briefly explain the workings of the features you implemented.
 *  Include code excerpts.
 **********************************************************************/
The queue (array) has several properties such as enqueueing an 
element to the rear index and dequeueing from the first index. There 
are functions that perform those data manipulations. 
The Boost Tests are made to check and make sure each function does it's 
job successfully and takes into account any exceptions that will be 
thrown. 

//size is 0 b/c nothing's in the array
CircularBuffer CB(6); 
BOOST_REQUIRE(CB.size() == 0); 

/**********************************************************************
 *  Did you complete the whole assignment?
 *  Successfully or not? 
 *  Indicate which parts you think are working, and describe
 *  how you know that they're working.
 **********************************************************************/
I did complete the assignment for the most part but I got tired fixing 
the errors in cpplint. Hopefully I can get to them next time. 
All 7 Boost Test cases ran successfully. 

/**********************************************************************
 *  Does your CircularBuffer implementation pass the unit tests?
 *  Indicate yes or no, and explain how you know that it does or does not.
 **********************************************************************/
Yes
All 7 Boost Test cases ran succesfully with no errors. 

/**********************************************************************
 *  Explain the time and space performance of your RingBuffer
 *	implementation
 **********************************************************************/
Total Heap space: 3114
No memory blocks were leaked and all space was freed

/**********************************************************************
 *  List whatever help (if any) you received from lab TAs,
 *  classmates, or anyone else.
 **********************************************************************/
Tutors: Ben F.

/**********************************************************************
 *  Describe any serious problems you encountered.                    
 **********************************************************************/
Had issues getting cpplint to work and once it did there were too 
many whitespace and other small errors
