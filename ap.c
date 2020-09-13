#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

struct Node
{
char[100] data;
struct Node* next;
}

//void word ( char* reversedString)
//{
//struct Node* newnode   
// Function to reverse the String 
char* reverseString(char input[]) 
{ 
  
    // Get the length of the string 
    int length = strlen(input); 
    int i; 
  
    // String to store the reverse 
    struct Node* reversedString  = (struct Node*)malloc(length * sizeof(struct Node)); 
  
    
    for (i = length - 1; i >= 0; i--) 
        reversedString[length - 1 - i] = input[i]; 
  
    // Return the reversed String 
  // return reversedString; 
reversedString-> data=reversedString;
reversedString-> next=NULL;
} 
  

int main(int argc, char* argv[]) 
{ 
    // Check if the length of args array is 1 
    if (argc == 1) 
        printf("No command line arguments found.\n"); 
    else { 
          while (struct Node* head!=NULL)
          printf("%c",head->data);
           head=head->next; 
        // Get the command line argument 
        // and reverse it 
        //printf("%s\n", reverseString(argv[1])); 
    } 
    return 0; 

} 
