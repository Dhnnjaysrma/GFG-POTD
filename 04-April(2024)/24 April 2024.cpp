class Solution:

    def ways(self, n,m):

        #write you code here

        count=1

        c=1

        k=n+m

        for i in range(k,k-m,-1):

            count*=i

        for j in range(1,m+1):

            c*=j

        return (count//c)%1000000007
