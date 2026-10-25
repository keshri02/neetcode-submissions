class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        temp=[]*2
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i]+nums[j] == target:
                    temp.append(i)
                    temp.append(j)
        return temp

        