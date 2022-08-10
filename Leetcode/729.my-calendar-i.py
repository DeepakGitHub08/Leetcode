#
# @lc app=leetcode id=729 lang=python3
#
# [729] My Calendar I
#

# @lc code=start
class MyCalendar:

    def __init__(self):
        self.bookedSlots = []

    def notDuplicate(self, start, end) -> bool:
        for slot in self.bookedSlots:
            if start >= slot[1] or end <= slot[0]:
                continue
            else:
                return False
        return True
    def book(self, start: int, end: int) -> bool:
        if self.notDuplicate(start, end):
            self.bookedSlots.append([start , end])
            return True
        else:
            return False

# Your MyCalendar object will be instantiated and called as such:
# obj = MyCalendar()
# param_1 = obj.book(start,end)
# @lc code=end

