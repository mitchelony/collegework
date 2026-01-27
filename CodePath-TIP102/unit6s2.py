# Your stack must have the following methods:

# __init()__: Initializes an empty stack (provided)
# push(): Accepts a tuple of two strings (title, author) and adds the element with the specified tuple to the front/top of the stack.
# pop(): Removes and returns the element at the front/top of the stack. If the stack is empty, returns None.
# peek(): Returns the value of the element at the front/top of the stack without removing it. If the stack is empty, returns None.
# is_empty(): Returns True if the stack is empty, and False otherwise.

class Node:
	def __init__(self, value, next=None):
		self.value = value
		self.next = next

# For testing
def print_stack(head):
    current = head.front
    while current:
        print(current.value, end=" -> " if current.next else "")
        current = current.next
    print()

class Stack:
    def __init__(self):
        self.front = None
    
    def is_empty(self):
        if self.front == None:
            return True
        else:
            return False

    def push(self, tuple):
        element = Node(tuple)
        if self.front == None:
            self.front = element
        else:
            element.next = self.front
            self.front = element
    
    def pop(self):
        if self.front == None:
            return None
        else:
            temp = self.front
            self.front = self.front.next
            return temp.value
    
    def peek(self):
        if self.front == None:
            return None
        else:
            return self.front.value
        
# Create a new Stack
stack = Stack()

# Add elements to the stack
stack.push(('Educated', 'Tara Westover'))
stack.push(('Gone Girl', 'Gillian Flynn'))
stack.push(('Dune', 'Frank Herbert'))
print_stack(stack)

# View the front element
print("Peek: ", stack.peek()) 

# Remove elements from the stack
print("Pop: ", stack.pop()) 
print("Pop: ", stack.pop()) 

# Check if the stack is empty
print("Is Empty: ", stack.is_empty()) 

# Remove the last element
print("Pop: ", stack.pop()) 

# Check if the queue is empty
print("Is Empty:", stack.is_empty()) 