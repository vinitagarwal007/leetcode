/*
 * @lc app=leetcode id=88 lang=c
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
    int i = 0, j = 0, k = 0;
    int *num3 = (int*)malloc((m+n)*sizeof(int));
    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            num3[k++] = nums1[i++];
        }else{
            num3[k++] = nums2[j++];
        }
    }
    while (i < m)
    {
        num3[k++] = nums1[i++];
    }
    while (j < n)
    {
        num3[k++] = nums2[j++];
        /* code */
    }
    for (int i = 0; i < m+n; i++)
    {
        nums1[i] = num3[i];
    }
    
    
}
// @lc code=end
