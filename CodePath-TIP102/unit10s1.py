'''
As a flight coordinator for CodePath airlines,
you have a 0-indexed adjacency list flights with n nodes where each node
represents the ID of a different destination and flights[i] is an integer array 
indicating that there is a flight from destination i to each destination in flights[i]. 
Write a function bidirectional_flights() that returns True if for any flight 
from a destination i to a destination j there also exists a flight from destination j to destination i. 
Return False otherwise.
Example Usage:
Example 1: flights1


Plan
for i in range(len(flights)):
    for j in flights[i]:
        if i not in flights[j]:
            
'''

# def bidirectional_flights(flights):
#     for i in range(len(flights)):
#         flag = True
#         for j in flights[i]:
#             if i not in flights[j]:
#                 return False
                
#         if flag and (len(flights[i]) > 0):
#             return True
#     return False



# flights1 = [[1, 2], [0], [0, 3], [2]]
# flights2 = [[1, 2], [], [0], [2]]

# print(bidirectional_flights(flights1))
# print(bidirectional_flights(flights2))
# Example Output:
# True
# False

'''
You are a pilot navigating a new airport and have a map of the airport represented as 
an undirected star graph with n nodes where each node represents a terminal in the airport labeled from 1 to n. 
You want to find the center terminal in the airport where the pilots' lounge is located.
Given a 2D integer array terminals where each terminal[i] = [u, v] indicates that there is a path(edge) 
between terminal u and v, return the center of the given airport.
A star graph is a graph where there is one center node and exactly n-1 edges connecting the center node ot every other node.
'''

# def find_center(terminals):
#     dict = {}
#     for i in terminals:
#         for j in i:
#             if j not in dict.keys():
#                 dict[j] = 1
#             else:
#                 dict[j] += 1
#     res = max(dict, key=dict.get)
#     return res
        
    


# terminals1 = [[1,2],[2,3],[4,2]]
# terminals2 = [[1,2],[5,1],[1,3],[1,4]]

# print(find_center(terminals1))
# print(find_center(terminals2))
# Example Output:
# 2
# 1

# You are a travel coordinator for CodePath Airlines, and you're helping a customer find
# all possible destinations they can reach from a starting airport.
# The flight connections between airports are represented as an adjacency dictionary flights,
# where each key is a destination, and the corresponding value is a list of other destinations
# that are reachable through a direct flight.
# Given a starting location start, return a list of all destinations reachable from the start location
# either through a direct flight or connecting flights with layovers. The list should be provided in ascending
# order by number of layovers required.

def get_all_destinations(flights):
    pass