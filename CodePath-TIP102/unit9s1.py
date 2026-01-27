# You run a local bakery and are given the roots of two binary trees order1 
# and order2 where each node in the binary tree represents the number of a 
# certain cookie type the customer has ordered. To maximize efficiency, you 
# want to bake enough of each type of cookie for both orders together.

# Given order1 and order2, merge the order together into one tree and 
# return the root of the merged tree. To merge the orders, imagine that 
# when place one tree on top of the other, some nodes of the two trees are 
# overlapped while others are not. If two nodes overlap, then sum node 
# values up as the new value of the merged node. Otherwise, the not None 
# node will be used as the node of the new tree.

# Start the merging process from the root of both orders.

# Evaluate the time complexity of your function. Define your variables and 
# provide a rationale for why you believe your solution has the stated 
# time complexity. Assume the input tree is balanced when calculating 
# time complexity.

from collections import deque 

# Tree Node class
class TreeNode:
    def __init__(self, value, left=None, right=None):
        self.val = value
        self.left = left
        self.right = right

def print_tree(root):
    if not root:
        return "Empty"
    result = []
    queue = deque([root])
    while queue:
        node = queue.popleft()
        if node:
            result.append(node.val)
            queue.append(node.left)
            queue.append(node.right)
        else:
            result.append(None)
    while result and result[-1] is None:
        result.pop()
    print(result)

def build_tree(values):
  if not values:
      return None

  def get_key_value(item):
      if isinstance(item, tuple):
          return item[0], item[1]
      else:
          return None, item

  key, value = get_key_value(values[0])
  root = TreeNode(value, key)
  queue = deque([root])
  index = 1

  while queue:
      node = queue.popleft()
      if index < len(values) and values[index] is not None:
          left_key, left_value = get_key_value(values[index])
          node.left = TreeNode(left_value, left_key)
          queue.append(node.left)
      index += 1
      if index < len(values) and values[index] is not None:
          right_key, right_value = get_key_value(values[index])
          node.right = TreeNode(right_value, right_key)
          queue.append(node.right)
      index += 1

  return root


# def merge_orders(order1, order2):
#     if (order1 and order2):
#         order1.val += order2.val
#         order1.left = merge_orders(order1.left, order2.left)
#         order1.right = merge_orders(order1.right, order2.right)
#         return order1
#     else:
#         return order1 or order2


# """
#      1             2         
#     /  \         /   \       
#    3    2       1     3   
#  /               \      \   
# 5                 4      7   
# """
# # Using build_tree() function included at top of page
# cookies1 = [1, 3, 2, 5]
# cookies2 = [2, 1, 3, None, 4, None, 7]
# order1 = build_tree(cookies1)
# order2 = build_tree(cookies2)

# # Using print_tree() function included at top of page
# print_tree(merge_orders(order1, order2))


# # [3, 4, 5, 5, 4, None, 7]
# # Explanation:
# # Merged Tree:
# #      3
# #     /  \      
# #   4     5  
# #  / \      \
# # 5   4      7


# Given a root of a binary tree design where each node 
# in the tree represents a cream puff in the 
# croquembouche, traverse the croquembouche in tier 
# order (i.e., level by level, left to right).

# You should return a list of lists where each inner 
# list represents a tier (level) of the croquembouche 
# and the elements of each inner list contain the 
# flavors of each cream puff on that tier (node vals 
# from left to right).

# class Puff():
#      def __init__(self, flavor, left=None, right=None):
#         self.val = flavor
#         self.left = left
#         self.right = right

# def listify_design(design):
#     design_list = []

#     return listify_design1(design, 0, design_list)


# def listify_design1(design, index, design_list):
#     if len(design_list) == index and design:
#         design_list.append(list())
#     if design:
#         design_list[index].append(design.val)
#         index += 1
#         listify_design1(design.left, index, design_list)
#         listify_design1(design.right, index, design_list)
#     return design_list


# """
#             Vanilla
#            /       \
#       Chocolate   Strawberry
#       /     \
#   Vanilla   Matcha  
# """
# croquembouche = Puff("Vanilla", 
#                     Puff("Chocolate", Puff("Vanilla"), Puff("Matcha")), 
#                     Puff("Strawberry"))
# print(listify_design(croquembouche))

# [['Vanilla'], ['Chocolate', 'Strawberry'], ['Vanilla', 'Matcha']]


# You have rows of cupcakes represented as a binary tree 
# cupcakes where each node in the tree represents a 
# cupcake. To ice them efficiently, you are icing 
# cupcakes one row (level) at a time, in zig zag order 
# (i.e., from left to right, then right to left for the 
# next row and alternate between).

# Return a list of the cupcake values in the order you 
# iced them.

class TreeNode():
     def __init__(self, flavor, left=None, right=None):
        self.val = flavor
        self.left = left
        self.right = right

def zigzag_icing_order(cupcakes):
    cupcakes_list = []
    l_r = False
    cupcakes_list = zigzag_icing_order1(cupcakes, 0, l_r, cupcakes_list)
    final_cupcakes_list = []

    for i in cupcakes_list:
        for j in i:
            final_cupcakes_list.append(j)

    return final_cupcakes_list

def zigzag_icing_order1(cupcakes, index, l_r, cupcakes_list):
    if len(cupcakes_list) == index and cupcakes:
        cupcakes_list.append(list())
    if cupcakes:
        cupcakes_list[index].append(cupcakes.val)
        index += 1
        if l_r:
            l_r = False
            zigzag_icing_order1(cupcakes.left, index, l_r, cupcakes_list)
            zigzag_icing_order1(cupcakes.right, index, l_r, cupcakes_list)
        elif l_r == False:
            l_r = True
            zigzag_icing_order1(cupcakes.right, index, l_r, cupcakes_list)
            zigzag_icing_order1(cupcakes.left, index, l_r, cupcakes_list)
    return cupcakes_list



# """
#             Chocolate
#            /         \
#         Vanilla       Lemon
#        /              /    \
#     Strawberry   Hazelnut   Red Velvet   
# """

# # Using build_tree() function included at top of page
flavors = ["Chocolate", "Vanilla", "Lemon", "Strawberry", None, "Hazelnut", "Red Velvet"]
cupcakes = build_tree(flavors)

print(zigzag_icing_order(cupcakes))

# ['Chocolate', 'Lemon', 'Vanilla', 'Strawberry', 'Hazelnut', 'Red Velvet']

# You have the root of a binary search tree orders,
# where each node in the tree represents an order and each node's value represents the number of 
# cupcakes the customer ordered. Convert the tree to a 'larger order tree' such that the value of 
# each node in tree is equal to its original value plus the sum of all node values greater than it.

# As a reminder a BST satisfies the following constraints:

# The left subtree of a node contains only nodes with keys less than the node's key.
# The right subtree of a node contains only nodes with keys greater than the node's key.
# Both the left and right subtrees must also be binary search trees.
# Evaluate the time and space complexity of your function. Define your variables and 
# provide a rationale for why you believe your solution has the stated time and space complexity.
# Assume the input tree is balanced when calculating time complexity.

# class TreeNode():
#      def __init__(self, order_size, left=None, right=None):
#         self.val = order_size
#         self.left = left
#         self.right = right

# def larger_order_tree(orders):
#     pass