class Solution {
public:
   void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
  int i = 0, j = 0, k = 0;
  vector<int> newVect(m + n);
  while (i < m && j < n)
  {
    cout << i << "  " << j << endl;

    if (nums1[i] > nums2[j])
    {
      newVect[k++] = nums2[j++];
    }
    else if (nums1[i] < nums2[j])
    {
      newVect[k++] = nums1[i++];
    }
    else
    {
      newVect[k++] = nums1[i++];
      newVect[k++] = nums2[j++];
    }
  }
  while (i < m)
  {
    newVect[k++] = nums1[i++];
  }
  while (j < n)
  {
    newVect[k++] = nums2[j++];
  }

  for (int i = 0; i < m + n; i++)
  {
    nums1[i] = newVect[i];
  }
}

};