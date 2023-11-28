stud_attendance = dict()

def setter(roll_no, class_attended):
    stud_attendance[roll_no] = class_attended

def getter(roll_no):
    return stud_attendance.get(roll_no,-5)


def update_data(roll_no, updated_attendance):
    stud_attendance[roll_no] = updated_attendance

def remove_data(roll_no):
    del(stud_attendance[roll_no])


setter('selvam',100)
setter('hrithik',80)
setter('braga',50)

print(stud_attendance)

update_data('braga',100)

print(stud_attendance)

remove_data('hrithik')

print(stud_attendance)

print(getter('selvam'))





## Hashmap Assignment:


# class Solution:
#     def twoSum(self, nums: List[int], target: int) -> List[int]:

#         seen = {}
#         for i in range(len(nums)):
#             if nums[i] in seen:
#                 return [seen[nums[i]],i]
#             else:
#                 seen[target-nums[i]] = i


        # for i in range(len(nums)):
        #     for j in range(i+1,len(nums)):
        #         if(nums[i]+nums[j] == target):
        #             retu rn [i,j]
        

        # for i in range(len(nums)):
        #     if target - nums[i] in nums:
        #         if nums.index(target-nums[i]) != i:
        #             return [i,nums.index(target-nums[i])]