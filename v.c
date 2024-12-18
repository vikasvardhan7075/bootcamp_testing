for(i=0; i<size-1; i++)
{ 
swap=0;
for(j=0; j<size-i-1; j++)
{ 
if(arr[j] > arr[j+1])
{ 
temp = arr[j+1];
arr[j] = arr[j+1];
arr[j+1] = temp;
swap++;
} 
} 
if(swap==0)
break;
} 