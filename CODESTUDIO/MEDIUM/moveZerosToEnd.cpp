void pushZerosAtEnd(vector<int> &arr) 
{
	int i=0, j=0, n=15;
    while(i<arr.size()){
        if(arr[i] != 0){
            swap(arr[j],arr[i]);
            j++;
        }
        i++;
    }
}