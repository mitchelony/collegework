# def find_cruise_length(cruise_lengths, vacation_length):
#     low = 0
#     high = len(cruise_lengths)
    
#     while low <= high:
#         mid = (high+low)//2
#         # print("Mid =", mid)
#         if cruise_lengths[mid] == vacation_length:
#             return True
#         elif cruise_lengths[mid] < vacation_length:
#             low = mid+1
#         else:
#             high = mid-1
#     return False

# print(find_cruise_length([9, 10, 11, 12, 13, 14, 15], 13))

# print(find_cruise_length([8, 9, 12, 13, 13, 14, 15], 11))

# Problem 1: Find Millenium Falcon Part
# Han Solo's ship, the Millenium Falcon, has broken down and he's searching for a specific replacement part.
# As a repair shop owner helping him out,
# write a function check_stock() that takes in a list inventory 
# where each element is an integer ID of a part you stock in your shop,
# and an integer part_id representing the integer ID of the part Han Solo is looking for. 
# Return True if the part_id is in inventory and False otherwise.

# Your solution must have O(log n) time complexity.

# def check_stock(inventory, part_id):
#     low = 0
#     high = len(inventory)-1
    
#     while low <= high:
#         mid = (high+low)//2
#         # print("Mid =", mid)
#         if inventory[mid] == part_id:
#             return True
#         elif inventory[mid] < part_id:
#             low = mid+1
#         else:
#             high = mid-1
#     return False

# print(check_stock([1, 2, 5, 12, 20], 20))
# print(check_stock([1, 2, 5, 12, 20], 100))



# Problem 2: Find Millenium Falcon Part II
# If you implemented your check_stock() function from the previous problem iteratively, implement it recursively.
# If you implemented it recursively, implement it iteratively.

# def midpoint(inventory, part_id, low, high):
#     if low > high:
#         return False
#     mid = (high + low)//2
#     if inventory[mid] == part_id:
#         return True
#     elif inventory[mid] > part_id:
#         return midpoint(inventory, part_id, low, mid-1)
#     else:
#         return midpoint(inventory, part_id, mid+1, high)
        
# def check_stock(inventory, part_id):
#     return midpoint(inventory, part_id, 0, len(inventory)-1)
    

# print(check_stock([1, 2, 5, 12, 20], 20))
# print(check_stock([1, 2, 5, 12, 20], 100))
