# Write a function to find the minimum depth of a binary tree.
# The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
# Example:
# Input: root = [3, 9, 20, null, null, 15, 7]
# Output: 2

'''
I-root
O-interger(the min depth)
C-BFS, level where children are none
E-empty tree,

Plan
- init q
- init counter
- check for empty list
-incremnt to 1
-append root to q
while q
- if there children(no leaf nodes)
    - move next level
    -increment counter by 1
-else
    return counter
'''

from collections import deque
class TreeNode:
    def __init__(self, value, left=None, right=None):
        self.val = value
        self.left = left
        self.right = right

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


def level_order_transversal(root):
    if not root:
        return 0

    q = deque([root])
    counter = 0

    while q:
        level_size = len(q)
        counter += 1

        for _ in range(level_size):
            curr = q.popleft()

            # If it's a leaf node, return the current depth
            if not curr.left and not curr.right:
                return counter

            if curr.left:
                q.append(curr.left)
            if curr.right:
                q.append(curr.right)
        

root = build_tree([3, 9, 20, None, None, 15, 7])
print(level_order_transversal(root))