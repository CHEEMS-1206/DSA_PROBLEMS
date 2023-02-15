/*
   Time Complexity : O(N)
   Space Complexity: O(N)
   
   Where N is the length of the array.
*/

int firstMissing(int arr[], int n) 
{
    bool visited[n + 2] = {false};
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] >= 0 && arr[i] <= n) 
        {
            visited[arr[i]] = true;
        }
    }
    for (int i = 1; i < n + 2; i++) 
    {
        if (!visited[i]) 
        {
            return i;
        }
    }

    return -1;
}
