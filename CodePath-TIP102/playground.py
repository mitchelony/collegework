def remove_dupes(items):
    duplicate = set(items)
    return list(duplicate)

def sort_by_parity(nums):
    if len(nums) == 0:
        return nums
    result = []
    odd = []
    for num in nums:
        if num % 2 == 0:
            result.append(num)
        else:
            odd.append(num)
    return result + odd