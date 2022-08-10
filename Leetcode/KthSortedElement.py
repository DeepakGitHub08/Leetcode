import math
def kthElement( arr1, arr2, k):
        def check(arr1, arr2):
            count1 = 0
            if len(arr1) > len(arr2):
                return check(arr2, arr1)
            n = len(arr1)
            m = len(arr2)
            low = max(0, k-m) 
            high = min(n,k)
            while low<= high:
                # count1 += 1
                # if count1 == 10:
                #     return 2
                c1 = (high + low)//2
                c2 = k - c1
                print(c1, low , high)
                l1 =  -math.inf if c1==0 else arr1[c1-1]
                l2 =  -math.inf if c2 ==0 else arr2[c2-1]
                r1 = math.inf if c1 == n else arr1[c1]
                r2 = math.inf if c2 == m else arr2[c2]
                
                if l1 <= r2 and l2 <= r1:
                    return max(l1, l2)
                if l2 > r1:
                    low = c1 + 1
                else:
                    high = c1 - 1
            return 1
        return check(arr1,arr2)

arr1 = [9 ,53 ,59 ,87]
n = 85
arr2 = list(map(int,input("\nEnter the numbers : ").strip().split()))[:n]
print(arr2)
print(kthElement(arr1, arr2,19))