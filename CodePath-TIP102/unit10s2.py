from collections import deque 

# Given the root of a binary tree display representing 
# the baked goods on display at your store, return 
# True if the tree is balanced and False otherwise.

# A balanced display is a binary tree in which the 
# difference in the height of the two subtrees of 
# every node never exceeds one.

# class TreeNode:
#     def __init__(self, value, left=None, right=None):
#         self.val = value
#         self.left = left
#         self.right = right

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
# def is_balanced(display):
#     leftsize = is_balanced1(display.left, 0)
#     rightsize = is_balanced1(display.right, 0)
#     return leftsize == rightsize

# def is_balanced1(display, size):
#     if display:
#         leftsize = is_balanced1(display.left, size+1)

#     return size

    # def check(node):
    #     if not node:
    #         return 0  # Base case: height of empty subtree
        
    #     left_height = check(node.left)  # Recursively check left subtree
    #     if left_height == -1:
    #         return -1  # Propagate failure if left unbalanced
        
    #     right_height = check(node.right)  # Recursively check right subtree
    #     if right_height == -1:
    #         return -1  # Propagate failure if right unbalanced
        
    #     if abs(left_height - right_height) > 1:
    #         return -1  # Node is not balanced
        
    #     return 1 + max(left_height, right_height)  # Return height if balanced

    # return check(display) != -1

# """
#       🎂
#      /  \
#    🥮   🍩
#        /  \  
#      🥖    🧁

# """
# # Using build_tree() function included at top of page
# baked_goods = ["🎂", "🥮", "🍩", "🥖", "🧁"]
# display1 = build_tree(baked_goods)

# """
#           🥖
#          /  \
#        🧁    🧁
#        /       \  
#       🍪       🍪
#      /           \
#     🥐           🥐  

# """
# baked_goods = ["🥖", "🧁", "🧁", "🍪", None, None, "🍪", "🥐", None, None, "🥐"]
# display2 = build_tree(baked_goods)


# print(is_balanced(display1)) 
# print(is_balanced(display2))  

# # True
# # False


# Your bakery stores each customer order in a 
# binary tree, where each node represents a 
# different customer's order and each node 
# value represents the number of cookies 
# ordered. Each level of the tree represents 
# the orders for a given day.

# Given the root of a binary tree orders, 
# return a list of the sums of all cookies 
# ordered in each day (level) of the tree.

class TreeNode:
    def __init__(self, value, left=None, right=None):
        self.val = value
        self.left = left
        self.right = right

def sum_each_days_orders(orders):
    res = []
    sum_each_days_orders1(orders, res, 0)
    return res

def sum_each_days_orders1(orders, res, size):
    if orders:
        if len(res) == size:
            res.append(orders.val)
        else:
            res[size] = res[size] + orders.val
        sum_each_days_orders1(orders.left, res, size + 1)
        sum_each_days_orders1(orders.right, res, size + 1)
    return res
    
    


"""
      4
     / \
    2   6
   / \  
  1   3
"""

# Using build_tree() function included at top of page
order_sizes = [4, 2, 6, 1, 3]
orders = build_tree(order_sizes)

print(sum_each_days_orders(orders))

# [4, 8, 4]