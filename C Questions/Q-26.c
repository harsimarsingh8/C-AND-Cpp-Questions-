//Question 26: 
//merge sort..

void merge(int left,int mid,int right,int *arr)
{
    int lt =left;
    int rt=mid+1;
    int l=mid+1-left;
    int r=right-mid;

    int temp1[l],temp2[r];
    int i=0,j=0;
    while(i<l)
    {
        temp1[i]=arr[lt];
        lt++;
        i++;
    }
    while(j<r)
    {
        temp2[j]=arr[rt];
        rt++;
        j++;
    }
    i=0,j=0;
    while(i<l && j<r)
    {
        if(temp1[i]<=temp2[j])
        {
            arr[left]=temp1[i];
            i++;
            left++;
        }
        else
        {
            arr[left]=temp2[j];
            j++;
            left++;
        }
    }
    while(i<l)
    {
        arr[left]=temp1[i];
        left++;
        i++;
    }
    while(j<r)
    {
        arr[left]=temp2[j];
        left++;
        j++;
    }
}
void mergesort(int left,int right,int *arr)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        mergesort(left,mid,arr);
        mergesort(mid+1,right,arr);
        merge(left,mid,right,arr);
    }
}

int main()
{
    int arr[6]={9,4,6,5,8,3};
    int i;
    mergesort(0,5,arr);
    for(i=0;i<6;i++)
    {
        printf("%d ",arr[i]);
    }
}