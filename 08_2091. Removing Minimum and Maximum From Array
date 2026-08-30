class Solution:
    def minimumDeletions(self, nums):
        n = len(nums)
        min_index = 0
        max_index = 0

        for i in range(1, n):
            if nums[i] < nums[min_index]:
                min_index = i
            if nums[i] > nums[max_index]:
                max_index = i

        left = min(min_index, max_index)
        right = max(min_index, max_index)

        option1 = right + 1
        option2 = n - left
        option3 = (left + 1) + (n - right)

        return min(option1, option2, option3)


nums = [10, 2, 8, 7, 1, 9]
obj = Solution()
print(obj.minimumDeletions(nums))
