# Problem 1: Selective DNA Deletion
# As a biologist, you are working on editing a long strand of DNA represented as a linked list of nucleotides.
# Each nucleotide in the sequence is represented as a node in the linked list, where each node contains a character ('A', 'T', 'C', 'G') representing the nucleotide.
# Given the head of the linked list dna_strand and two integers m and n, 
# write a function edit_dna_sequence() that simulates the selective deletion of nucleotides in a DNA sequence. You will: 
# - Start at the beginning of the DNA strand. 
# - Retain the first m nucleotides from the current position. 
# - Remove the next n nucleotides from the sequence. 
# - Repeat the process until the end of the DNA strand is reached.
# Return the head of the modified DNA sequence after removing the mentioned nucleotides.
# Evaluate the time and space complexity of your solution. 
# Define your variables and provide a rationale for why you believe your solution has the stated time and space complexity.

class Node:
   def __init__(self, value, next=None):
       self.value = value
       self.next = next

# For testing
def print_linked_list(head):
    current = head
    while current:
        print(current.value, end=" -> " if current.next else "\n")
        current = current.next


def edit_dna_sequence(dna_strand, m, n):
    current = dna_strand
    
    if current is None:
        return None
    
    while current:
        # Step 1: Skip m-1 nodes to retain m nodes
        for i in range(1, m):  # start at 1 since we're already at 1st node
            if current is None:
                return dna_strand
            current = current.next
        
        if current is None:
            break
        
        # Now current is at m-th node; start deleting next n nodes
        temp = current.next
        for j in range(n):
            if temp is None:
                break
            temp = temp.next
        
        # Link m-th node to the (m+n+1)-th node
        current.next = temp
        current = temp  # move current to the new position
       
    return dna_strand
    
    
dna_strand = Node(1, Node(2, Node(3, Node(4, Node(5, Node(6, Node(7, Node(8, Node(9, Node(10, Node(11, Node(12, Node(13)))))))))))))

print_linked_list(edit_dna_sequence(dna_strand, 2, 3))