# Path Sum III

Given the root of a binary tree and an integer targetSum, return the number of paths where the sum of the values along the path equals targetSum.

The path does not need to start or end at the root or a leaf, but it must go downwards (i.e., traveling only from parent nodes to child nodes).

**Example 1:** <br/>
**Input:** root = [10,5,-3,3,2,null,11,3,-2,null,1], targetSum = 8 <br/>
**Output:** 3 <br/>
**Explanation:** The paths that sum to 8 are shown. <br/>
<img width="534" alt="Screen Shot 2022-10-31 at 1 13 38 PM" src="https://user-images.githubusercontent.com/21989049/198956958-bed2bea8-d357-47fd-bf1b-66a94750a3e5.png">

**Example 2:**<br/>

**Input:** root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22<br/>
**Output:** 3<br/>


**Constraints:** <br/>

- The number of nodes in the tree is in the range [0, 1000].<br/>
- -109 <= Node.val <= 109<br/>
- -1000 <= targetSum <= 1000<br/>
