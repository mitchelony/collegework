def max_corridor_area(segments):
    l = 0
    r = len(segments)-1
    
    area = 0
    while l < r:
        min_width = min(segments[l],segments[r])
        distance = r - l
        current_area = min_width * distance
        if current_area > area:
            area = current_area
        l += 1
    return area

print(max_corridor_area([1, 8, 6, 2, 5, 4, 8, 3, 7])) 
print(max_corridor_area([1, 1])) 

49
1x