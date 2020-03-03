#include "list.h"

//Output the contents of a LLLL
/*
1. Is the problem repetitive?
2. Is part of the problem repetitive?
   - have one function for the repetitive part (recursive)
     and another for the non-repetitive part 

For the repetitive part (recursion)
1. What is the most simple stopping condition? (base case)
   - what is it and what should we do?
2. Is there another stopping condition?
   - if so, what is it and what should we do?
3. What do I want to do in this function?
   - are we counting? outputing? compairing?
4. How do we get to the next smaller sub-problem?
   - This means: How do we call the function that will help 
     us ultimately reach our base stopping condition 
5. Is there anything else that needs to get done
 */

void display_mydata(node * head)
{
  if(NULLL == head)
    return;
  cout << head->data << " "; //Before display_mydata(head->next); for regular traversal
  display_mydata(head->next); //After this cal will make the list print in reverse order
}
